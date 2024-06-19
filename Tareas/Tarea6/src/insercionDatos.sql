/*
Archivo: insercionDatos.sql
Descripción:
*/

USE plan_de_estudios;

INSERT INTO Cursos (Sigla, Nombre, Semestre, Creditos) VALUES
('IE-0579', 'Administración de sistemas', 'IX', 4),
('IE-0613', 'Electrónica Industrial', 'IX', 4), 
('IE-0599', 'Anteproyecto de TFG', 'IX', 4),
('IE-', 'Optativa I', 'IX', 3),
('IE-', 'Optativa II', 'IX', 3),
('IE-0679', 'Ciencia de datos para la estimación y pronóstico de eventos', 'X', 3),
('IE-0541', 'Seguridad ocupacional', 'X', 3),
('IE-', 'Optativa III', 'X', 3),
('IE-', 'Optativa IV', 'X', 3);

INSERT INTO Requisitos (CursoID, RequisitoCursoID) VALUES
(4, 1);

INSERT INTO Descripciones (CursoID, Descripcion, Dificultad) VALUES