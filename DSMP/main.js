const { app, BrowserWindow, globalShortcut, Tray, Menu } = require('electron');
const path = require('path');

let mainWindow;
let quickAddWindow;
let tray;

app.disableHardwareAcceleration();

function createMainWindow() {  mainWindow = new BrowserWindow({
    width: 600,
    height: 600,
    resizable: false,
    frame: false,
    transparent: true,
    webPreferences: {
      preload: path.join(__dirname, 'preload.js'),
      contextIsolation: true,
      nodeIntegration: false
    },
    icon: path.join(__dirname, 'icon.png')
  });

  mainWindow.loadFile('index.html');
  console.log('Main window created');

  mainWindow.on('closed', () => {
    mainWindow = null;
  });
}

function createQuickAddWindow() {  quickAddWindow = new BrowserWindow({
    width: 300,
    height: 100,
    resizable: false,
    frame: false,
    transparent: true,
    alwaysOnTop: true,
    webPreferences: {
      preload: path.join(__dirname, 'preload.js'),
      contextIsolation: true,
      nodeIntegration: false
    },
    icon: path.join(__dirname, 'icon.png')
  });

  quickAddWindow.loadFile('quick-add.html');
  console.log('Quick-add window created');

  quickAddWindow.on('closed', () => {
    quickAddWindow = null;
  });
}

app.on('ready', () => {
  console.log('App starting');
  createMainWindow();

  tray = new Tray(path.join(__dirname, 'icon.png'));
  const contextMenu = Menu.buildFromTemplate([
    { label: 'Show App', click: () => mainWindow.show() },
    { label: 'Quit', click: () => app.quit() }
  ]);
  tray.setToolTip('Task Master');
  tray.setContextMenu(contextMenu);

  globalShortcut.register('Shift+Space', () => {
    console.log('Shift+Space pressed');
    if (quickAddWindow) {
      quickAddWindow.show();
    } else {
      createQuickAddWindow();
    }
  });
});

app.on('window-all-closed', () => {
  if (process.platform !== 'darwin') {
    app.quit();
  }
});

app.on('will-quit', () => {
  globalShortcut.unregisterAll();
});

app.on('activate', () => {
  if (BrowserWindow.getAllWindows().length === 0) {
    createMainWindow();
  }
});

const { ipcMain } = require('electron');
ipcMain.on('close-app', () => {
  console.log('IPC: close-app');
  if (mainWindow) {
    mainWindow.hide();
  }
});

ipcMain.on('quick-task-added', () => {
  console.log('IPC: quick-task-added');
  if (mainWindow) {
    mainWindow.webContents.send('refresh-tasks');
  }
});