/*
Archivo: insercionDatos.sql
Descripción: En este archivo se encuentra el código fuente ejecutado en mySQL
Workbench para realizar cada una de las consultas solicitadas a la base de
datos plan_de_estudios
*/

USE plan_de_estudios;

-- Utilizar un join para listar siglas, nombre, semestre, créditos, descripción y dificultad
SELECT cursos.Sigla, cursos.Nombre, cursos.Semestre, cursos.Creditos, descripciones.Descripcion, descripciones.Dificultad
FROM cursos
JOIN descripciones
ON cursos.CursoID = descripciones.CursoID
WHERE cursos.Semestre = 'IX' OR cursos.Semestre = 'X';  -- Sólo mostrar cursos de licenciatura

-- Consulta para listar los requisitos de un curso en específico
