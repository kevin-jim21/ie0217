/*
Archivo: creacionTablas.sql
Descripción: En este archivo se encuentra el código fuente ejecutado en mySQL
Workbench para añadir dos cursos nuevos al plan de estudios y además, añadir 
toda la información necesaria y sus requisitos.
*/

USE plan_de_estudios;

INSERT INTO Cursos (Sigla, Nombre, Semestre, Creditos) VALUES
('IE-0555', 'Diseño de placas de circuitos impresos (PCB)', 'IX', 3),
('IE-0777', 'Intérpretes y compiladores', 'X', 3),
-- Requisito del curso Intérpretes y compiladores
('IE-0117', 'Programación bajo plataformas abiertas', 'III', 3);

INSERT INTO Requisitos (CursoID, RequisitoCursoID) VALUES
(16, 11),  -- IE-0577 depende de Electrónica II (IE-0413)
(17, 18);  -- IE-0777 depende de Programación bajo plataformas abiertas (IE-0117)

INSERT INTO Descripciones(CursoID, Descripcion, Dificultad) VALUES
(16,
'Se aprenden y ponen en práctica los conceptos necesarios para diseñar placas de circuitos impresos, más conocidos como PCB. Además, de dar un conocimiento general del mercado de estos.',
'Media'),
(17,
'El contenido de este curso se centra en el estudio a profundidad del funcionamiento de los intérpretes y compiladores en un computador.',
'Difícil');