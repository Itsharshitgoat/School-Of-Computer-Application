CREATE DATABASE IF NOT EXISTS carbon_path;

USE carbon_path;

CREATE TABLE IF NOT EXISTS trips (
    id INT PRIMARY KEY AUTO_INCREMENT,
    distance DOUBLE,
    transport VARCHAR(50),
    carbon DOUBLE,
    suggested_transport VARCHAR(50),
    potential_saving DOUBLE,
    date DATETIME DEFAULT CURRENT_TIMESTAMP
);
