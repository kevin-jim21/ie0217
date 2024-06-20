/*
Archivo: eliminaciones.sql
Descripción: En este archivo se encuentra el código fuente ejecutado en mySQL
Workbench para eliminar algunos registros de las tablas, como fue solicitado.
*/

USE plan_de_estudios;

-- Eliminar curso inventado
DELETE FROM descripciones
WHERE CursoID = 17;

DELETE FROM requisitos
WHERE CursoID = 17 OR RequisitoCursoID = 17;

DELETE FROM cursos
WHERE CursoID = 17;  -- Intérpretes y compiladores

-- Eliminar curso del plan de estudio original
DELETE FROM descripciones
WHERE CursoID = 1;

DELETE FROM requisitos
WHERE CursoID = 1 OR RequisitoCursoID = 1;

DELETE FROM cursos
WHERE CursoID = 1;  -- Administración de sistemas

-- Eliminar otro curso del plan de estudios original
DELETE FROM descripciones
WHERE CursoID = 7;

DELETE FROM requisitos
WHERE CursoID = 7 OR RequisitoCursoID = 7;

DELETE FROM cursos
WHERE CursoID = 7;  -- Salud ocupacional

-- Eliminar requisitos específicos
DELETE FROM requisitos  -- Electrónica II ya no será requisito de Electrónica de potencia y control de máquinas
WHERE RequisitoID = 10;

DELETE FROM requisitos  -- Modelos Probabilísticos ya no será requisito de Ciencia de datos para la estimación...
WHERE RequisitoID = 5;