/*
Archivo: insercionDatos.sql
Descripción: En este archivo se encuentra el código fuente ejecutado en mySQL
Workbench para insertar la información básica del curso y sus requisitos.
*/

USE plan_de_estudios;

INSERT INTO Cursos (Sigla, Nombre, Semestre, Creditos) VALUES
-- Licenciatura
('IE-0579', 'Administración de sistemas', 'IX', 4),
('IE-0613', 'Electrónica Industrial', 'IX', 4), 
('IE-0599', 'Anteproyecto de TFG', 'IX', 4),
(null, 'Optativa I', 'IX', 3),
(null, 'Optativa II', 'IX', 3),
('IE-0679', 'Ciencia de datos para la estimación y pronóstico de eventos', 'X', 3),
('IE-0541', 'Seguridad ocupacional', 'X', 3),
(null, 'Optativa III', 'X', 3),
(null, 'Optativa IV', 'X', 3),
-- Requisitos de los cursos de Licenciatura
('IE-0479', 'Ingeniería Económica', 'VIII', 3),
('IE-0413', 'Electrónica II', 'V', 3),
('IE-0315', 'Máquinas Eléctricas I', 'VI', 3),
('IE-0499', 'Proyecto Eléctrico', 'VIII', 3),
('IE-0405', 'Modelos Probabilísticos de Señales y Sistemas', 'VI', 3),
('IE-0501', 'Reponsabilidad en el ejercicio profesional de la ingeniería eléctrica', 'VI', 1);

INSERT INTO Requisitos (CursoID, RequisitoCursoID) VALUES
(1, 10),
(2, 11),
(2, 12),
(3, 13),
(6, 14),
(6, 1),
(7, 15);

INSERT INTO Descripciones(CursoID, Descripcion, Dificultad) VALUES
(1,
'En este curso, se considerará la organización o empresa como la unidad de estudio, sobre la cual se desarrollará el análisis de factores internos y externos tales como geopolítica, evolución tecnológica, globalización de mercados, cambios económicos, transformaciones del mercado, papel del estado, y otros, aspectos que gravitan en el adecuado accionar de estos sistemas.',
'Media'),
(2,
'El curso permite introducir los principios y fundamentos de la electrónica de potencia.',
'Difícil'),
(3,
'El curso de Anteproyecto de Tesis es un curso orientado a desarrollar en el estudiante las habilidades necesarias para elaborar su propuesta de investigación.',
'Fácil'),
(4,
'Optativa I',
'Media'),
(5,
'Optativa II',
'Media'),
(6,
'Integra la formación profesional del estudiante de Ingeniería Eléctrica mediante la aplicación de conceptos estudiados en cursos anteriores, junto con nuevas herramientas que permitan apoyar de manera sistémica el proceso de análisis de eventos.',
'Difícil'),
(7,
'Curso de seguridad ocupacional enfocado al oficio de la ingeniería eléctrica.',
'Fácil'),
(8,
'Optativa III',
'Media'),
(9,
'Optativa IV',
'Media');
