# TAREA 3

En esta carpeta se pueden encontrar todos los archivos de codigo fuente utilizados para desarrollar la parte práctica. Además, en esta nota se encuentran las respuestas a la parte teórica de la evaluación y las instrucciones de compilación para el código fuente.

# Parte Práctica

*A continuación, se muestran los comandos que se deben utilizar para compilar y ejecutar (respectivamente) los archivos de código fuente del programa "Gestión de contactos":*

+ g++ -o main.exe src/NodeCloud.cpp src/Functions.cpp src/main.cpp
+ ./main.exe

**Nota: este comando de compilación fue utilizado en Linux y para ser empleado correctamente debe ubicarse en la ruta ie0217/Tareas/Tarea3 del repositorio.**

*A partir del siguiente link se puede ingresar a la página web en la que está alojada la documentación:*

playful-parfait-c2a99f.netlify.app

# Parte Teórica

*1. ¿Qué es un algoritmo y cuáles son sus características principales?*

Un algoritmo es un conjunto de instrucciones cuyo propósito es realizar una tarea específica. Un algoritmo debe tener la capacidad de ser implementado en cualquier lenguaje de programación y procurar ser lo más eficaz posible.

*2. Explica la diferencia entre un algoritmo eficiente y uno ineficiente.*

Un algoritmo eficiente es aquel que cumple con su propósito aplicando la menor cantidad de pasos, operaciones o iteraciones que sea posible. Un algoritmo ineficiente en cambio, es aquel que a pesar de cumplir con el propósito realiza muchas operaciones y que, de ser ideado correctamente podría haber cumplido el objetivo con menos operaciones.

*3. ¿Qué es una estructura de datos y por qué son importantes*

Es un almacenamiento que se utiliza para alojar y organizar datos. Su importancia se debe a que facilita el acceso y la manipulación para los programadores de cantidades muy grandes de datos.

*4. Describe las diferencias entre una estructura de datos estática y una dinámica.*

Las estructuras estáticas son aquellas a las que una vez creadas no se les puede modificar; como lo son los arrays. Mientras que las estructuras dinámicas son aquellas las cuales si se pueden modificar después de ser creadas, como lo son las listas.

*5. ¿Qué es la memoria dinámica y cómo se gestiona en lenguajes de programación como C++, explique las operaciones que se pueden realizar?*

La memoria dinámica, se utiliza en lenguajes como C++ con el objetivo de que el programador pueda tener un manejo a voluntad de los recursos de memoria que posee y que de esta forma, pueda crear programas más eficientes en cuanto al uso de recursos de la computadora. Estas son las principales operaciones que se pueden realizar en C++ para el uso de memoria dinámica:

* malloc: Asignar un bloque de memoria.
* calloc: Asignar un bloque de memoria e inicializar los valores a cero.
* realloc: Cambiar el valor de un bloque de memoria que fue asignado previamente por medio de malloc o calloc.
* free: Liberar un bloque de memoria asignado mediante malloc, calloc o realloc.

*6. ¿Cuáles son las ventajas y desventajas de la memoria dinámica en comparación con la memoria estática?*

En cuanto a las ventajas, se puede aprovechar al máximo los recursos de memoria ya que en ciertos programas donde por ejemplo, no se sabe con anterioridad cuantos elementos va a recibir un array, se puede manipular su bloque de memoria para que soporte justamente los valores que se ingresaron; en caso de asginar un array con muchos valores que probablemente no van a ser utilizados, el array va a tomar espacio de memoria inecesariamente para elementos que no existen. Aprovechar al máximo los recursos de memoria implica que el programa va a tener un mejor rendimiento, por ello la importancia de utilizarla. En cuanto a la desventaja, la principal es que al poseer un acceso a "voluntad" de los recursos de memoria, de no incluir una opción para liberar la memoria después de utilizarla, eventualmente se va a generar un memory leak.

*7. Explique qué es un árbol binario y cuáles son sus principales características.*

Un árbol binario es un tipo de estructura de datos que no es lineal y en la que cada uno de los nodos puede tener como máximo dos bifuraciones. [1]

*8. ¿Qué es una cola (queue) y en qué situaciones se utiliza comúnmente?*

Una cola hace referencia a una fila como lo puede ser cotidianamente la fila de una caja de supermercado, en donde el primero en llegar a la caja es el primero que puede pagar e irse; a este principio se le conoce como FIFO (First-In, First-Out).

*9. ¿Cuál es la diferencia entre una cola (queue) y una pila (stack)?*

Mientras que la cola sigue el principio FIFO, la pila está basada en el principio LIFO, en el que el último en entrar es el primero en salir (LIFO: Last-In, First-Out).

*10. Describe cómo funciona el algoritmo de inserción (insert) en una tabla hash.*

En una tabla hash, los valores (values) son asignados o insertados a la tabla por medio de un "key", de forma que se pueden insertar muchos valores a un mismo key y que dentro de él, tendrán un indíce asignado con el fin de facilitar su acceso.

*11. ¿Qué es la función de dispersión (hash function) y por qué es importante en las tablas hash?*

Esta función consiste en un algoritmo que transoforma cualquier bloque arbitrario de datos en una serie de caracteres con una longitud establecida. La importancia del hash se encuentra en el sector de la ciberseguridad y el manejo de contraseñas, ya que generalmente las contraseñas no son guardadas en los servidores como texto; si no que se guarda con un key del cual no se puede pasar a texto, garantizando la seguridad de los usuarios. [2]

*12. ¿Cuál es la complejidad temporal promedio de búsqueda en una tabla hash bien implementada?*

Las tablas hash correctamente implementadas deben contar con una complejidad temporal promedio de O(1) (un tiempo constante).

*13. Explica cómo se realiza la operación de inserción (push) en una pila (stack).*

Al hacer una insercción en una pila, el elemento que ingresa queda en la parte superior de la pila (como si se tratase de una pila de platos).

*14. ¿Cuál es la complejidad temporal de las operaciones de apilar (push) y desapilar (pop)
en una pila?*

Ambas operaciones toman O(1); es decir, un tiempo constante.

*15. Describe cómo funciona una lista enlazada y cuáles son sus ventajas y desventajas.*

Una lista enlazada funciona como si fuese un array "dinámico", en donde cada elemento contiene un enlace al siguiente elemento de la estructura. En cuánto a sus ventajas, se encuentra la capacidad de añadir y eleminar elementos de la estructura en tiempo de ejecución, lo que trae con ello un uso más eficiente de la memoria y además, resulta fácil de hacer insercciones y eliminaciones al sólo tener que cambiar la dirección del puntero al siguiente elemento. En cuanto a sus desventajas, presenta un uso de memoria adicional ya que cada elemento debe almacenar un puntero dentro de sí, otra desventaja es que al acceder directamente a un elemento,se deben atravesar todos los nodos que se encuentren detrás de él. [3]

*16. ¿Qué es un nodo en una lista enlazada y qué contiene?*

El nodo en una lista entrelazada, es un tipo de "entidad" que contiene un valor y punteros hacia sus nodos secundarios.

*17. ¿Cuál es la diferencia entre una lista enlazada simple y una lista enlazada doblemente enlazada?*

La diferencia se encuentra en que en una lista enlazada simple los elementos contienen un puntero hacia el siguiente elemento, mientras que en la lista doblemente enlazada los elementos contienen dos punteros; uno para el siguiente elemento y otro que apunta hacia el elemento anterior. Como consecuencia de esto, la lista doblemente enlazada se puede recorrer en ambas direcciones. [4]

*18. ¿Cómo se realiza la eliminación (delete) de un nodo en una lista enlazada?*

Para realizar un delete es necesario encontrar el nodo anterior, cambiar la dirección del puntero al nodo que se encuentra una posición después del nodo que va a ser eliminado y por último, liberar la memoria de este nodo para concluir su eliminación. [5]

*19. Explica cómo funciona el algoritmo de recorrido (traversal) en un árbol binario.*

Un algoritmo de recorrrido transversal en un árbol binario es mediante el cual se recorren cada uno de los nodos que contienen un árbol. Existen distintas formas de recorrer un árbol binario; la primera de ellas es hacerlo en "orden"; recorriendo primero todos los nodos del lado izquierdo hasta llegar al nodo raiz y después, recorriendo los nodos de la parte derecha del árbol. En "preorden", significa recorrer primero el nodo raíz, luego todos los nodos de la parte izquierda del árbol y por último, todos los nodos de la parte derecha del árbol. En "post orden" se recorren primero todos los nodos de la parte izquierda del árbol, luego todos los nodos de la parte derecha y por último, el nodo raíz.

*20. ¿Cuál es la complejidad temporal del recorrido en preorden, en orden y en postorden en un árbol binario balanceado?*

Estos tres métodos toman una complejidad temporal de O(n) en un árbol binario balanceado, donde "n" representa el número de nodos que contiene el árbol. [6]

*21. Explique la diferencia entre la notación Big O (O) y la notación Omega () en el análisis de la complejidad temporal de los algoritmos. Proporciona un ejemplo de un algoritmo y determina su complejidad temporal utilizando ambas notaciones Big O y Omega.*

La notación Big O toma el caso del algoritmo considerado como el "peor caso"; es decir, el caso que le toma al algoritmos más pasos o iteraciones para cumplir el objetivo. Mientras que la notación Omega toma el caso que le toma al algoritmo menos iteraciones para resolver. Por ejemplo, el algoritmo bubble sort cuenta con un Big O de O(n<sup>2</sup>), ya que tendría que realizar n comparaciones para cada elemento del array, mientras que cuenta con una notación de Omega de O(n), ya que si el array ya está acomodado, sólamente se realizará un recorrido (n comparaciones) del array.

**Referencias**

- [1] *WordPress*. Último acceso: 2024-04-14, desde https://hhmosquera.wordpress.com/arbolesbinarios/
- [2] Donohue B.(2014). *Kaspersky*.  Último acceso: 2024-04-14, desde https://latam.kaspersky.com/blog/que-es-un-hash-y-como-funciona/2806/
- [3] Greyrat R.(2022). *Barcelona Geeks*. Último acceso: 2024-04-14, desde https://barcelonageeks.com/ventajas-y-desventajas-de-la-lista-vinculada/
- [4] Biblia del programador.(2014). [6] https://www.bibliadelprogramador.com/2014/04/listas-simplemente-y-doblemente.html
- [5] GeekforGeeks.(2023). Último acceso: 2024-04-14, desde https://www.geeksforgeeks.org/deletion-in-linked-list/
- [6] Datta S.(2024). *Baeldung*. Último acceso: 2024-04-14, desde https://www.baeldung.com/cs/tree-traversal-time-complexity