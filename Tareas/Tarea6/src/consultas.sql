/*
Archivo: insercionDatos.sql
Descripción: En este archivo se encuentra el código fuente ejecutado en mySQL
Workbench para realizar cada una de las consultas solicitadas a la base de
datos plan_de_estudios.
*/

USE plan_de_estudios;

-- Utilizar un join para listar siglas, nombre, semestre, créditos, descripción y dificultad
SELECT cursos.Sigla, cursos.Nombre, cursos.Semestre, cursos.Creditos, descripciones.Descripcion, descripciones.Dificultad
FROM cursos
JOIN descripciones
ON cursos.CursoID = descripciones.CursoID
WHERE cursos.Semestre = 'IX' OR cursos.Semestre = 'X';  -- Sólo mostrar cursos de licenciatura

-- Consulta para listar los requisitos de un curso en específico
SELECT cursos.Sigla, cursos.Nombre, cursos.Semestre, cursos.Creditos
FROM cursos
JOIN requisitos
ON cursos.CursoID = RequisitoCursoID
WHERE requisitos.CursoID = 6;  -- Ese número puede ser cambiado para listar los requisitos de cualquier otro curso

-- Consulta para listar todos los cursos que no son optativos
SELECT *
FROM cursos
WHERE Sigla IS NOT NULL AND (Semestre = 'IX' OR Semestre = 'X');  -- Sólo licenciatura

-- Consulta para listar los cursos que pertenecen al semestre X
SELECT *
FROM cursos
WHERE Semestre = 'X';