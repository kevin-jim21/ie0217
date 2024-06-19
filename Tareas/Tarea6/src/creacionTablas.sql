/*
Archivo: creacionTablas.sql
Descripción: En este archivo se encuentra el código fuente ejecutado en mySQL
Workbench para crear la base de datos y cada una de las tablas referentes al
plan de estudios de licenciatura en Ingeniería Eléctrica.
*/

CREATE DATABASE IF NOT EXISTS plan_de_estudios;
USE plan_de_estudios;

-- Creacion de la tabla Cursos
CREATE TABLE Cursos(
	CursoID INT AUTO_INCREMENT PRIMARY KEY,    
    Sigla VARCHAR(7) UNIQUE,  -- Clave candidata
    Nombre VARCHAR(75) UNIQUE,  -- Clave candidata
    Semestre VARCHAR(3),  -- Sera IX o X
    Creditos INT
);

-- Creacion de la tabla Requisitos
CREATE TABLE Requisitos(
	RequisitoID INT AUTO_INCREMENT PRIMARY KEY,
    CursoID INT,
    RequisitoCursoID INT,
    FOREIGN KEY (CursoID) REFERENCES Cursos(CursoID),
    FOREIGN KEY (RequisitoCursoID) REFERENCES Cursos(CursoID)
);

-- Creacion de la tabla Descripciones
CREATE TABLE Descripciones(
	DescripcionID INT AUTO_INCREMENT PRIMARY KEY,
    CursoID INT,
    Descripcion VARCHAR(1000),
    Dificultad VARCHAR(7),  -- Sera Facil, Media o Dificil
    FOREIGN KEY (CursoID) REFERENCES Cursos(CursoID)
);

