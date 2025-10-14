-- Primary Key
CREATE TABLE Department (
    Dept_ID NUMBER(4) PRIMARY KEY,
    Dept_Name VARCHAR2(50)
);

-- NOT NULL
CREATE TABLE Employee (
    Emp_ID NUMBER(6) NOT NULL,
    Emp_Name VARCHAR2(50) NOT NULL
);

-- UNIQUE
CREATE TABLE Login (
    User_ID NUMBER(6) PRIMARY KEY,
    Username VARCHAR2(30) UNIQUE,
    Email VARCHAR2(50) UNIQUE
);

-- Foreign Key
CREATE TABLE Enrollment (
    Enrollment_ID NUMBER(6) PRIMARY KEY,
    DeptNo NUMBER(2),
    FOREIGN KEY (DeptNo) REFERENCES Course(DeptNo)
);