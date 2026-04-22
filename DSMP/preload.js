const { contextBridge, ipcRenderer } = require('electron');
const { shell } = require('electron');

contextBridge.exposeInMainWorld('electronAPI', {
  ipcRenderer: {
    send: (channel, ...args) => {
      const validChannels = ['close-app', 'quick-task-added'];
      if (validChannels.includes(channel)) {
        ipcRenderer.send(channel, ...args);
      } else {
        console.error('Invalid IPC channel:', channel);
      }
    },
    on: (channel, func) => {
      const validChannels = ['refresh-tasks'];
      if (validChannels.includes(channel)) {
        ipcRenderer.on(channel, (event, ...args) => func(...args));
      } else {
        console.error('Invalid IPC channel:', channel);
      }
    }
  },
  shell: {
    openExternal: (url) => {
      console.log('Opening external URL:', url);
      shell.openExternal(url);
    }
  },
  require: (module) => {
    if (module === 'electron-store') {
      return require('electron-store');
    }
    console.error('Invalid module:', module);
    throw new Error('Only electron-store module is allowed');
  }
});