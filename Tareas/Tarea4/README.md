# TAREA 4

En esta carpeta se pueden encontrar todos los archivos de código fuente utilizados para desarrollar la parte práctica. Además, en esta nota se encuentran las respuestas a la parte teórica de la evaluación y las instrucciones de compilación para el código fuente.

## Parte Teórica

### Templates

*1. Definición de Templates: Explique el concepto de templates en C++ y proporcione un ejemplo simple.*

Las templates en C++ permiten escribir funciones y clases genéricas que pueden ser utilizadas con tipos de datos diferentes. Un ejemplo sencillo de esto es el de crear un template para una clase que recibe dos números y devuelve su suma; en vez de crear clases diferentes para sumar datos tipo entero, float o double, se crea una "clase genérica" que puede recibir cualquiera de estos tipos de datos y que retorna un dato del mismo tipo de los recibidos.

*2. Sobrecarga de Plantillas: ¿Cómo se realiza la sobrecarga de funciones con plantillas en C++?*

La sobrecarga de templates consta de la creación de otro template que va a tomar casos más específicos a conveniencia del programador, a esto también se le conoce como "especialización" y redefine le comportamiento del template al recibir los parámetros especificados. [1]

*3. Plantillas de Clases: Explique cómo se pueden utilizar plantillas en la definición de clases en C++.*

Para el caso de las clases, las plantillas son utilizadas con el fin de que dentro de esta, sus atributos y métodos puedan aceptar parámetros de entrada de distintos tipos de datos. Es decir, si la clase tiene un atributo "número", se podrán instanciar objetos con un atributo número de tipo entero o de tipo flotante; permitiendo así que el programador no deba repetir código al crear otra clase o realizar una herencia sólamente para reescribir el tipo de atributos como este.

### Excepciones

*4. Manejo de Excepciones: Describa los bloques try, catch y throw y cómo se utilizan para el manejo de excepciones en C++.*

- Try: se ingresa el bloque de código que podría generar una excepción en el programa.
- Catch: se ingresa el bloque de código que utiliza el programador para manejar su excepción; es decir, dentro de catch se encuentra el código que se va a ejecutar en caso de que se levante la excepción.
- Throw: línea de código que levanta un error al detectar una excepción y dirige el flujo del programa hacia catch.

*5. Excepciones Estándar: Nombre al menos tres excepciones estándar proporcionadas por C++ y proporciona ejemplos de situaciones en las que podrían ser útiles.*

- std::bad_alloc: esta excepción se puede utilizar al intentar reservar memoria dinámica para evitar que el programa se caiga en caso de que la reserva de memoria no haya sido exitosa.
- std::bad_cast: se puede utilizar a la hora de intentar cambiar una variable de tipo (cast) para levantar una excepción en caso de que este cambio no se haya podido realizar.
- std::out_of_range: esta se puede utilizar como un tipo de "sanity check" para evitar que el programa se caiga en caso de que se intente acceder a un índice de un array que no existe.

*6. Política de Manejo de Excepciones: ¿Qué es una política de manejo de excepciones y por qué es importante considerarla al diseñar software?*

Una política de manejo de excepciones consiste en una serie de normas que dicta las prácticas que debe seguir un programador al momento de prevenir los errores de su programa. Una política de manejo podría considerarse por ejemplo, la forma que C++ utiliza para detectar, levantar y actuar ante una excepción (try, throw y catch). Su importancia principal se encuentra en reducir la cantidad de errores no controlados que puede presentar un diseño de software. [2]

*7. Noexcept: Explica el propósito de la palabra clave noexcept y cómo se utiliza en C++.*

"noexcept" es un operador que omite en tiempo de compilación la acción de manejar exepciones, lo que resulta en una ejecución más rápida del programa. Se recomienda usar noexcept cuando se sabe con certeza que la función no arrojará ninguna excepción. [3]

*8. Explique la diferencia entre las excepciones std::logic error y std::runtime error.*

La excepción std::logic_error se utiliza para leventar una excepción al detectar errores antes de que se ejecute el programa, que normalmente corresponden a errores lógicos. Mientras que std::runtime_error se utiliza para levantar una excepción al detectar errores en tiempo de ejecución. [4]

*9. Explique qué ocurre cuando una excepción no es capturada.*

El programa finaliza abruptamente al encontrar un error en tiempo de ejecución.

### STL (Standard Template Library):

*10. Contenedores STL: Nombre cinco contenedores diferentes de la STL y explique brevemente en qué situaciones sería apropiado usar cada uno.*

- Vector: cuando se necesitan almacenar valores de un mismo tipo en el orden en el que se ingresan.
- Set: cuando se necesitan almacenar valores de un mismo tipo en un orden específico (enteros en orden creciente, carácteres o strings en orden alfabético).
- Unordered_set: cuando se necesitan almacenar valores y se prefiere que estos se encuentren de forma desordenada.
- Map: cuando se necesita hacer algún tipo de asociación entre pares de datos (como lo es por ejemplo, una HashTable). De esta forma, se puede asociar a estudiantes con un número específico, o guardar contraseñas.
- Stack: cuando se desean almacenar datos, añadirlos y eliminarlos en forma de pila; es decir, utilizando el principio LIFO (Last in, First out).

*11. Iteradores en STL: Explique el concepto de iteradores en la STL y cómo se utilizan para acceder a elementos en contenedores.*

Un iterador en la STL es un objeto que representa la posición de un elemento dentro de un contenedor. A partir de ellos, se itera sobre contenedores y se acceden a objetos como si se tratase de un puntero, utilizando de referencia el primer elemento "begin()" o una posición después del último elemento del contenedor "end()".

*12. Algoritmos STL: Proporcione ejemplos de al menos tres algoritmos de la STL y describa sus funciones básicas.*

- Algoritmos de búsqueda: se puede utilizar "find" para buscar un elemento dentro de un rango, "count" para contar el número de apariciones de un elemento dentro de un rango y "binary_search" para una búsqueda binaria.
- Algoritmos de ordenamiento: se utiliza "sort" para ordenar un contenedor de forma ascendente, "partial_sort" ordena los primeros elementos de un contenedor y "nth_element" coloca el n-ésimo elemento en su posición correcta dentro de un contenedor.
- Algoritmos de eliminación y modificación: se utiliza "remove" para eliminar elementos específicos dentro de un contenedor, "replace" permite reemplazar elementos específicos dentro de un contenedor y "reverse" por su parte, invierte el orden de un rango de elementos dentro de un contenedor.

*13. Algoritmos Personalizados: ¿Cómo podría utilizar un algoritmo personalizado con la STL?*

Se podría elaborar un algoritmo propio que sea más complejo (ya que si se requiere elaborar un algoritmo personalizado es porque un solo algoritmo de STL no logra concretar la tarea) se pueden utilizar un conjunto de estos algoritmos de la STL para concretar el objetivo. Por ejemplo: si se desea eliminar un contacto de una aplicación gestora de contactos, el programador se puede apoyar "find" para encontrar el contacto y de "remove" para eliminarlo.

**Referencias**

- [1] Costa Guzmán H.(2022). *HektorDocs*. Último acceso: 2024-05-01, desde https://docs.hektorprofe.net/cpp/10-function-templates/
- [2] Generalized Intelligent Framework for Tutoring.(2021). Último acceso: 2024-05-01, desde https://www.gifttutoring.org/projects/gift/wiki/Error_Handling_Policy_2021-1
- [3] GeekforGeeks.(2023). Último acceso: 2024-05-01, desde https://www.geeksforgeeks.org/noexcept-operator-in-cpp-11/
- [4] StackOverflow.(2016). Último acceso: 2024-05-01, desde https://stackoverflow.com/questions/2924058/confused-about-stdruntime-error-vs-stdlogic-error