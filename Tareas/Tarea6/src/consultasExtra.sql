/*
Archivo: consultasExtra.sql
Descripción: En este archivo se encuentra el código fuente ejecutado en mySQL
Workbench para realizar las consultas extra acerca de la lista de cursos
requisito para los cursos Electrónica de potencia y control de máquinas y 
Ciencia de datos para la estimación y pronóstico de eventos.
*/

USE plan_de_estudios;

-- Se reutiliza consulta para listar requisitos de un curso en específico
SELECT cursos.Sigla, cursos.Nombre, cursos.Semestre, cursos.Creditos
FROM cursos
JOIN requisitos
ON cursos.CursoID = RequisitoCursoID
WHERE requisitos.CursoID = 4;  -- Electrónica de potencia y control de máquinas

SELECT cursos.Sigla, cursos.Nombre, cursos.Semestre, cursos.Creditos
FROM cursos
JOIN requisitos
ON cursos.CursoID = RequisitoCursoID
WHERE requisitos.CursoID = 6;  -- Ciencia de datos para la estimación y pronóstico de eventos.
