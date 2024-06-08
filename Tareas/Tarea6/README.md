# TAREA 6

En este directorio, se encuentran todos los archivos de código fuente, cabecera y relacionados con documentación empleados para la parte práctica de la tarea 6. Así mismo, en este archivo README se encuentran las instrucciones de compilación y ejecución de la parte práctica, el link donde se aloja la documentación y la parte teórica de esta tarea.

## Instrucciones de ejecución

## Parte Teórica

*1. ¿Qué es una base de datos relacional y cuáles son sus características fundamentales?*

Una base de datos relacional, es aquella en la que se utilizan tablas para organizar los datos. Las tablas cuentan principalmente con:

+ Fila o registro: Representa exactamente un registro dentro de la tabla.
+ Columna o campo: Representa un atributo o característica de una entidad.
+ Clave primaria: Una única columna que identifica cada fila en una tabla.
+ Clave foránea: Columna la cual establece una relación entre dos tablas distintas.
+ Índice: Estructura de datos que se utiliza para mejorar la velocidad de las bases de datos.
+ Vista: Tabla virtual que se obtiene al consultar sobre una o más tablas.

*2. ¿Cuál es la diferencia entre una clave primaria y una clave candidata en una base de datos relacional?*

Una clave canditata es un conjunto de atributos que puede identificar de manera única una tabla; es decir, una columna que se puede utilizar como clave primaria. La diferencia se encuentra en que una tabla dentro de una base de datos puede tener varias claves candidatas, pero sólo una podrá ser utiizada como clave primaria.

*3. ¿Qué son las claves foráneas y cómo se utilizan para mantener la integridad referencial en una base de datos?*

Como ya se explicó anteriormente, una clave foránea es un conjunto de atributos (columna) que permiten establecer una conexión entre dos tablas diferentes. Estas permiten mantener una integridad referencial para una base de datos, debido a que los datos de la clave foránea de una tabla deben coincidir con los datos que se encuentran en la tabla referenciada.

*4. ¿Qué es una transacción en el contexto de bases de datos y cuáles son las propiedades ACID que debe cumplir?*

Una transacción es una serie de operaciones aplicadas sobre objetos que están relacionados con una base de datos [1]. Por otro lado, estas cuentan con cuatro propiedades claves que deben cumplir:

+ Atomicidad: Todos los cambios en los datos se interpretan como una sola operación; esto garantiza que en caso de tener éxito se realizan todos los cambios, en caso contrario ninguno de ellos. [2]
+ Coherencia: Se garantiza que antes y después de una transacción, la información de la base de datos tenga coherencia con respecto a la o las operaciones realizadas durante la transacción. [2]
+ Aislamiento: Esta propiedad hace referencia a que los procesos realizados durante una transacción resultan "invisibles" para todas las otras transacciones; de esta forma se garantiza que una transacción sólo pueda tomar los datos antes o después de los procesos realizados por una transacción. [2]
+ Durabilidad: Después de que una transacción se concrete de manera exitosa, se garantiza que los cambios no serán revertidos para así, establecer una condición de durabilidad cada que se realiza una transacción. [2]


*5. ¿Qué son las vistas (views) en SQL y cuáles son los beneficios y limitaciones de su uso?*

Las vistas son un tipo de tablas virtuales generadas a partir de algunos datos seleccionados (por el programador) de la base de datos. Entre sus beneficios se encuentran que es una forma de mostrar sólamente la información relevante (para el contexto de una consulta a la base de datos), lo que proporciona una mayor facilidad al momento de trabajar con datos y que además mantienen el formato de tabla para facilitar su comprensión. Mientras que su principal limitación, se encuentra en que no pueden ser tomadas como los datos reales, ya que estos no son en realidad las mismas tablas que se encuentran en la base de datos y además, entregan sólamente una pequeña parte de la información de la base de datos.

*6. ¿Qué es la normalización en bases de datos y cuáles son las diferentes formas normales (normal forms)?*

La normalización es la estrategia que se emplea para evitar las redundancias en las bases de datos relacionales [3]. Además, se pueden describir brevemente algunas de las estrategias más importantes conocidas como "formas normales", de la siguiente manera:

+ Primera forma normal: Una tabla de datos se encuentra en esta forma cuando todos los datos son atómicos (a cada dato se le reserva una celda propia) y cuando todas las columnas de una tabla cuentan con el mismo tipo de dato; para normalizar la tabla se subdividen todos los datos multivalor en columnas separadas, para después verficar que los valores en cada una de las columnas corresponden al mismo tipo. [3]
+ Segunda forma normal: Una tabla de datos se encuentra en esta forma cuando además de las condiciones de la forma normal anterior, aquellos atributos no-clave(que no forman parte de ninguna clave) dependen funcionalmente de la columna de la clave primaria; para normalizar la tabla, primero se comprueba que todos los atributos no-clave dependen por completo de la clave primaria, después se envia a todos los atributos que son no-clave y que no dependen de la clave primaria hacia otras tablas. [3]
+ Tercera forma normal: Una tabla de datos se encuentra en esta forma cuando además de las condiciones de las formas normales anteriores, cuando los atributos no-clave no dependen de forma transitiva de una clave candidata; para normalizar bajo esta forma, se reparten los atributos de este tipo en tablas separadas que se interconectan con claves ajenas. [3]

*7. ¿Cómo funcionan los índices en SQL y cuál es su impacto en el rendimiento de las consultas?*

Los índices en SQL, son tablas de búsqueda rápida que permiten encontrar los registros que los usuarios necesitan buscar con mayor frecuencia, de aquí su impacto en el rendimiento de las consultas; además, resultan útiles para conectar tablas relacionales y también para la búsqueda en tablas de mayor tamaño [4].

*8. ¿Qué es SQL Injection y cuáles son las mejores prácticas para prevenir este tipo de ataque?*

ES una técnica en la cual los comandos SQL son ejecutados desde las columnas de entrada o los parámetros de consulta de tipo URL; en caso de tener éxito, personas no autorizadas pueden acceder y modificar las tablas de las bases de datos. Algunas pŕacticas para prevenirlo son: la aplicación de declaraciones preparadas y consultas parametrizadas (establecer parámetros específicos para las consultas que realiza el usuario), utilizar procedimientos almacenados y establecer un acceso con menos privilegios para los usuarios. [5]

*9. ¿Qué son los procedimientos almacenados (stored procedures) en SQL y cómo pueden mejorar la eficiencia y seguridad de las operaciones de base de datos?*

Los procedimientos almacenados mencionados en el inciso anterior, permiten utilizar declaraciones preparadas y reutilizables de código SQL para que cuando un usuario haga una consulta, las acciones que se ejecuten sean previamente establecidas por el programador. A partir de esto, se obtiene una mayor eficiencia ya que se estará reutilizando código cada vez que se consulte la base de datos y además, permite que ningún usuario pueda ejecutar código malicioso.

*10. ¿Cómo se implementan las relaciones uno a uno, uno a muchos y muchos a muchos en una base de datos relacional y qué consideraciones se deben tener en cuenta en cada caso?*

+ Uno a uno: En este tipo de relación una fila de la primera tabla debe coincidir exactamente con una fila de la segunda tabla y viceversa, se suele utilizar para dividir tablas con muchas columnas, aislar una parte de la tabla por motivos de seguridad, entre otros. [6]
+ Uno a muchos: En este tipo una fila de la primera tabla puede coincidir con muchas filas de la segunda tabla, este tipo de relaciones son utilizadas si sólo una de las columnas relacionadas es una clave principal o tiene restricción única.  [6]
+ Muchos a muchos: En este tipo de relación una fila de la primera tabla puede coincidir con muchas filas de la segunda tabla y viceversa; para esta relación es necesario definir una tercer tabla conocida como "tabla de conexión", en donde la clave principal sea la combinación de las claves extranjeras de la primera y la segunda tabla. [6]

## Parte Práctica

## Referencias

- [1] IBM. (2021). Último acceso: 2024-06-08, desde https://www.ibm.com/docs/es/psfa/7.1.0?topic=appliance-transactions
- [2] IBM. (2022). Último acceso: 2024-06-08, desde https://www.ibm.com/docs/es/cics-tx/11.1?topic=processing-acid-properties-transactions
- [3] Ionos Digital Guide. (2018). Último acceso: 2024-06-08, desde https://www.ionos.es/digitalguide/hosting/cuestiones-tecnicas/normalizacion/
- [4] Petrovic, B. (2019). *SQLShack*. Último acceso: 2024-06-08, desde https://www.sqlshack.com/es/vision-general-y-estrategias-de-indices-sql/#:~:text=Un%20%C3%ADndice%20SQL%20es%20una,la%20b%C3%BAsqueda%20de%20tablas%20grandes.
- [5] CloudFlare. (s.f.). Último acceso: 2024-06-08, desde https://www.cloudflare.com/es-es/learning/security/threats/how-to-prevent-sql-injection/
- [6] Learn Microsoft. (2023). Último acceso: 2024-06-08, desde https://learn.microsoft.com/es-es/office/troubleshoot/access/define-table-relationships