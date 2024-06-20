/*
Archivo: actualizaciones.sql
Descripción: En este archivo se encuentra el código fuente ejecutado en mySQL
Workbench para realizar cada una de las actualizaciones solicitadas al plan
de estudios.
*/

USE plan_de_estudios;

-- Modificar 3 Optativas
UPDATE cursos
SET Sigla = 'IE-0514', Nombre = 'Electrónica de potencia y control de máquinas', Creditos = 4
WHERE CursoID = 4;

UPDATE cursos
SET Sigla = 'IE-1116', Nombre = 'Temas especiales II en electrónica', Creditos = 2
WHERE CursoID = 5;

UPDATE cursos
SET Sigla = 'IE-0724', Nombre = 'Laboratorio de programación y microcomputadores', Creditos = 4
WHERE CursoID = 8;

-- Añadir cursos de requisito para matricular estas optativas a la base de datos
INSERT INTO Cursos (Sigla, Nombre, Semestre, Creditos) VALUES
-- Licenciatura
('IE-0316', 'Laboratorio de Máquinas Eléctricas I', 'VI', 1),
('IE-0321', 'Estructura de Computadoras Digitales I', 'VI', 3);

-- Actualizar la tabla de requisitos
INSERT INTO Requisitos (CursoID, RequisitoCursoID) VALUES
(4, 11),
(4, 12),
(4, 19),
(6, 11),
(7, 20);

-- Actualizar descripción y dificultad de 3 cursos
UPDATE descripciones
SET Descripcion = 'Enfocado hacia la correcta investigación y sus buenas prácticas.', Dificultad = 'Media'
WHERE CursoID = 3; -- AnteProyecto de TFG

UPDATE descripciones
SET Descripcion = 'Se estudian los principios de la Seguridad Ocupacional y como estos deben ser aplicados al trabajar con Máquinas Eléctricas.', Dificultad = 'Difícil'
WHERE CursoID = 7; -- Seguridad Ocupacional

UPDATE descripciones
SET Descripcion = 'Este curso tiene como objetivo proveer al estudiante de las herramientas empresariales adecuadas para administrar distintos sistemas laborales.', Dificultad = 'Fácil'
WHERE CursoID = 1; -- Administración de sistemas