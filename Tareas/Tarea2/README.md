# TAREA 2

En esta carpeta se pueden encontrar todos los archivos de codigo fuente utilizados para desarrollar la parte práctica. Además, en esta nota se encuentran las respuestas a la parte teórica de la evaluación y las instrucciones de compilación para el código Administración Mundial.

## Parte Teórica

*1. ¿Qué es la programación orientada a objetos y cuáles son sus principales principios?*

Este paradigma de programación consiste en visualizar personas, lugares, vehículos, electrodomésticos, compañías y muchos más como si se tratase de un "objeto", el cual se encuentra dentro de una categoría o "clase". Los principales principios o pilares de la OOP son: herencia, polimorfismo, encapsulamiento, abstracción.

*2. Explique el concepto de ocultamiento de datos y cómo se logra en C++.*

Al trabajar con clases en C++ y aplicar herencias, es posible ocultar métodos y atributos declarandolos como protegidos o privados. Al ser protegidos sólamente podrán ser accedidos en la misma clase o en clases derivadas; mientras que al ser privados sólamente podrán ser accedidos dentro de la misma clase.

*3. ¿Cuál es la diferencia entre una clase y un objeto en C++?*

La clase representa un tipo o categoría, mientras que un objeto es un miembro de esta categoría; al ser miembro de esta categoría obtiene características (atributos) y funcionalides (métodos) otorgadas por esta.

*4. ¿Qué es el polimorfismo y cómo se logra en C++?*

El polimorfismo hace referencia en OOP a cuando un método adquiere diferentes "formas" de acuerdo a la clase que lo está utilizando. En C++ esto se logra por ejemplo, declarando un método virtual en una clase base para después reescribirlo en una clase derivada.

*5. ¿Qué significa el término encapsulamiento en el contexto de la OOP?*

El encapsulamiento hace referencia al ocultamiento de métodos y atributos de una clase por medio de declaraciones públicas, protegidas y privadas.

*6. ¿Cuál es el propósito del constructor y el destructor en una clase de C++?*

El constructor es el que permite crear objetos a partir de una clase definida; mientras que el destructor se encarga de eliminar objetos cuando estos lleguen al final de scope.

*7. ¿Investigue cómo se define una clase abstracta en C++ y cuál es su función?*

Para definir una clase abstracta en C++ es necesario declarar una clase con al menos un método virtual puro. Usualmente las clases abstractas se utilizan como clases bases las cuales no son instanciadas, sólamente derivadas. [1]

*8. ¿Investigue qué es un constructor de copia y para qué se utiliza en C++*

Un constructor que tiene como parámetro de entrada la dirección de otro objeto de la misma clase; de esta manera, al crear un objeto con este constructor de copia, se inicializan sus atributos con los valores de los atributos del objeto que fue pasado como parámetro para el constructor. Se utiliza simplemente, para copiar los valores de un objeto existente en otro nuevo. [2]


*9. ¿Investigue qué es el polimorfismo estático y dinámico en C++ y cómo se diferencian?*

El polimorfismo estático hace refencia a la sobrecarga de métodos, mientras que el polimorfismo dinámico es el cambio en el comportamiento de un método, dependiendo del objeto que lo invoque. La diferencia se encuentra en que el polimorfismo estático ocurre durante la compilación; mientras que el polimorfismo dinámico ocurre en tiempo de ejecución. [3]

*10. ¿Qué son las clases anidadas y cuál es su utilidad en C++?*

Una clase anidada es una clase declarada dentro de otra clase. Su utilidad se encuentra en el encapsulamiento, ya que las funciones de miembro de la clase delimitadora no tienen acceso a los miembros de una clase anidada. [4]

*11. En el contexto de la programación orientada a objetos en C++, ¿cómo se pueden utilizar los punteros para trabajar con objetos y clases? Explique también por qué los punteros a objetos son útiles en la programación orientada a objetos.*

Se pueden utilizar punteros a miembros no estáticos de los objetos y punteros hacia objetos propiamente [5]. Los punteros a objetos son útiles ya que al asignar memoria dinámica, permiten una gestión flexible de la memoria y creación dinámica de objetos.[6]

*12. ¿Qué es una función prototipo?*

Una función propototipo consiste en la declaración de una función al principio del código o en un headerfile. Se utiliza para informar al compilador de que existe la función y que eventualmente, podrá encontrar su declaración más adelante en el código fuente.

*13. ¿Explique los diferentes tipos de miembros que existen en la OOP?*

Los miembros en la OOP, son todos aquellos que pueden pertenecer a una clase.

- Atributos: características con valores definidos que posee cada objeto de una clase.
- Métodos: funciones internas que poseen todos los objetos de una clase.
- Constructor: utilizado para la creación de objetos (instanciación).
- Destructor: utilizado para eliminar objetos al final del scope.

*14. ¿Qué es un memory leak?*

Un memory leak que traducido al español significa "fuga de memoria", ocurre cuando un programa no libera la memoria que ya no necesita; esto eventualmente provoca una acumulación continua de memoria que provoca un consumo excesivo de los recursos del dispositivos y puede llegar a ocasionar fallos.

*15. ¿Qué es y cuál es la importancia de la Herencia multinivel, múltiple y jerárquica de C++*

- Herencia multinivel: se trata de realizar una cadena de herencia de tres o más clases en donde la clase base, hereda a una clase derivada que a su vez hereda a otra clase derivada; y así sucesivamente. La utilidad de esta se puede encontrar en que como su nombre dice, se pueden generar distintos niveles de herencia, en donde cada vez que se hereda se encuentran más métodos y atributos para un objeto.
- Herencia múltiple: esta ocurre cuando una clase deriva de dos o más clases. Esto le permite a una clase adquirir métodos y atributos de más de una clase, lo cual es muy útil para representar distintas situaciones a nivel de programación.
- Herencia jerárquica: esta ocurre cuando una clase base deriva dos o más clases. Su utilidad se encuentra en que con las clases se pueden forjar diferentes "moldes" para distintas categorías de un mismo tipo, como puede ser por ejemplo animales con perro, gato, león y cerdo. 

*16. ¿Qué es la composición y cómo se implementa en C++?*

Es la declaración de objetos de distintas clases al interior de la definición de una nueva clase. Para implementarlo en C++, se deben de crear al menos dos clases y dentro de una de ellas crear un objeto de la otra clase, añadiendole además sus métodos y atributos a partir de la propia instancia. [7]

*17. ¿Qué es la sobreescritura de funciones en C++ y cuando es bueno usarla?*

Se le llama sobrecarga de funciones al uso de dos o más funciones con el mismo nombre, pero que reciben parámetros diferentes, ya sea por su cantidad o tipo. Es bueno utilizarla cuando se tienen varias funciones que cumplen un propósito similar; de esta forma el programador no debe complicarse colocando nombres diferentes y el compilador sabrá cual función utilizar de acuerdo a su tipo y los parámetros que recibe.

*18. ¿Qué es un método y un atributo y cuál es la diferencia entre ellos?*

Un método es una función propia de los objetos que pertenecen a una clase, mientras que un atributo es una variable que poseen todos los objetos que pertenecen a una clase. Los métodos se utilizan para atribuir acciones a un objeto, mientras que los atributos son sus características.

*19. ¿Qué es el constructor y el destructor en una clase?*

El constructor es el miembro de una clase que permite crear objetos de esta a lo largo del código, mientras que el destructor se encarga de eliminarlos cuando finaliza su scope.

*20. ¿Qué es la sobrecarga de operadores en C++ y cómo se utiliza?*

La sobrecarga de operadores consiste en la definición por parte del programador de como se desea que se interpreten ciertas operaciones al aplicarlas entre objetos. Estas operaciones son las que se pueden realizar con operadores comunes (+, -, *, /) y su uso facilita propiamente el realizar operaciones entre ciertos atributos de los objetos.

**Referencias**

- [1] IBM (2023). Último acceso: 2024-04-08, desde https://www.ibm.com/docs/es/i/7.5?topic=only-abstract-classes-c
- [2] Correa Camilo (s.f.). *CodinGame*. Último acceso: 2024-04-08, desde https://www.codingame.com/playgrounds/50577/miembros-especiales-de-la-clase-en-c-practica-2/constructores#:~:text=Constructor%20de%20copia%3A%20Es%20un,que%20se%20pasa%20como%20par%C3%A1metro.
- [3] Jesús (2023). *Dongee*. Último acceso: 2024-04-08, desde https://www.dongee.com/tutoriales/que-es-el-polimorfismo-dinamico/
- [4] IBM (2023). Último acceso: 2024-04-08, desde https://www.ibm.com/docs/es/i/7.5?topic=only-nested-classes-c
- [5] IBM (2023). Último acceso: 2024-04-08, desde https://www.ibm.com/docs/es/i/7.5?topic=only-pointers-members-c
- [6] Goyal Shivani (2024). *Unstop*. Último acceso: 2024-04-08, desde https://unstop.com/blog/pointer-to-object-in-cpp
- [7] Correa Camilo (s.f.). *CodinGame*. Último acceso: 2024-04-08, desde https://www.codingame.com/playgrounds/50747/herencia-en-c-practica-3/composicion-de-clases

