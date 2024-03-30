# TAREA 1

En esta carpeta se pueden encontrar todos los archivos de codigo fuente utilizados para desarrollar la parte práctica. Además, en esta nota se encuentran las respuestas a la parte teórica de la evaluación y las instrucciones de compilación para el código del juego ahorcado.

## Parte Práctica

*A continuación, se muestra el comando que se debe utilizar para compilar los archivos de código fuente del juego Ahorcado:*

g++ -o main.exe src/main.cpp src/Functions.cpp

**Nota: este comando de compilación fue utilizado en Linux y para ser empleado correctamente debe ubicarse en la ruta ie0217/Tareas/Tarea1 del repositorio.**


## Parte Teórica

*1. ¿Cuál es la principal diferencia entre C y C++?*

La principal diferencia es que en C++ se implementó la programación orientada a objetos, por lo que C++ contiene las herramientas necesarias para programar de acuerdo a este paradigma (clases, métodos, atributos y otros).

*2. Explique el propósito y el uso de los siguientes comandos de Git: git init, git add, git commit, git push, git pull, git clone, git branch, git merge.*

- git init: este comando permite crear un nuevo repositorio local.
- git add: toma un archivo o directorio que fue creado después del último commit (interpretado por git como "untracked") o modificado después de este (interpretado por git como "unstaged") y lo coloca en un estado en el cual se encuentra listo para formar parte de un nuevo commit (staged).
- git commit: coloca cada uno de los directorios y archivos que se encuentran en el estado "staged" al momento de su aplicación de manera permanente como una versión nueva del proyecto.
- git push: se encarga de añadir al repositorio remoto las nuevas versiones del proyecto que se crearon en el repositorio local.
- git pull: actualizar el repositorio local con las nuevas versiones que se encuentran en el repositorio remoto.
- git clone: descargar un repositorio remoto para utilizar y/o modificar de forma local.
- git branch: este comando se utiliza para administrar las distintas ramas (branches) que posee un repositorio. Dependiendo de las banderas que se apliquen al comando, realiza distintas funciones, comom pueden ser crear o borrar ramas.
- git merch: permite combinar el historial de versiones de dos ramas distintas. Generalmente se utiliza cuando el usuario trabajó en una rama diferente de "main" y desea agregar sus modificaciones a esta rama principal.

*3. ¿Qué es Git y cuál es su propósito en el desarrollo de software?*

Git es una herramienta de código abierto que se utiliza para el control de versiones en un proyecto. Es una forma de registrar organizadamente los cambios que se realizaron en el proyecto sin tener que generar nuevos archivos o directorios con diferente nombre de forma local, de esta forma es mucho más sencillo revisar versiones anteriores de un proyecto y conocer cuales fueron los cambios realizados y el momento justo en el que se aplicaron estos cambios.

*4. ¿Qué es un conflicto de fusión (merge conflict) en Git y cómo se resuelve?*

Un conflicto de fusión ocurre cuando git no es capaz de resolver automáticamente las diferencias entre dos commits; este problema se puede presentar por ejemplo, cuando dos programadores están trabajando en su repositorio local en el mismo branch, modifican el mismo archivo y uno de ellos carga el commit al repositorio remoto; en este caso el segundo ya no puede cargar su commit, ya que no tendría su repositorio local actualizado. La solución más rápida para resolver este conflicto es abrir el archivo en donde está el conflicto y realizar los cambios que sean necesarios de forma manual; después de esto ya se podría realizar el commit y cargarlo al repositorio remoto [1].

*5. ¿Qué es un archivo .gitignore y para qué se utiliza?*

Los archivos .gitignore permiten que al cargar a un repositorio remoto el contenido de un repositorio local, en el repositorio remoto no se muestren ciertos archivos que no van a ser de interés para los demás usuarios que accedan al repositorio; de esta forma, se eliminan generalmente todos aquellos archivos generados al momento de compilar o ejecutar un código (dependiendo del lenguaje que se esté utilizando). Para utilizarlo, el usuario solamente debe agregar todas aquellas terminaciones de archivos que desea "ignorar" para su repositorio remoto.

*6. ¿Qué es una solicitud de extracción (pull request) en GitHub y cómo se utiliza?*

Un pull request es la solicitud que realiza un programador al dueño de un repositorio público para añadir cambios hechos en su branch al branch main del repositorio remoto. Esta herramienta se encuentra en GitHub con el fin de que los desarrolladores puedan colaborar entre sí en sus proyectos [2].

*7. ¿Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado
y uno interpretado?
Proporcione ejemplos de situaciones en las que sería más óptimo utilizar un lenguaje
compilado y otras en las que sería más adecuado un lenguaje interpretado.*

La principal diferencia entre un lenguaje de programación compilado y uno interpretado es que en el compilado se lee todo el código fuente y se convierte en lenguaje máquina (dependiendo del compilador puede convertirse a lenguaje ensamblador como paso intermedio, o convertirse directamente a lenguaje máquina), al finalizar este proceso se genera un ejecutable, el cual se utiliza para correr el programa. Por su parte, en un lenguaje interpretado el código es leído e interpretado por la máquina al mismo tiempo que está siendo ejecutado, línea por línea. En el caso del lenguaje interpretado, puede existir un error en alguna parte del código, pero este no será detectado por el intérprete hasta que el programa no llegue a esa parte del código, mientras que en el compilado se encontraran todos los errores presentes en el código fuente antes de generar el ejecutable. En cuánto a los casos de uso, se opta por utilizar lenguajes de compilación cuando se busca que el código sea más eficiente, ya que el proceso de compilación efectua optimizaciones en el programa, un claro ejemplo del uso de lenguajes compilados es en la implementación de sistemas embebidos, ya que estos al ocuparse para tareas muy específicas ocupan utilizar un código muy eficiente; mientras que se prefieren lenguajes de interpretación cuando se desea disminuir el tiempo entre creación y ejecución del código y se aprovecha además el uso de lenguajes con mayor abstracción. Un ejemplo de ello es en el desarrollo de páginas web, donde no es una prioridad la eficiencia del código y se necesitan utilizar varios frameworks que son compatibles con lenguajes interpretados.

*8. Explique qué es un linker en el contexto de un lenguaje de programación compilado.
¿Cuál es su función principal y por qué es esencial en el proceso de compilación?*

También llamado enlazador, es el programa que se encarga de tomar cada uno de los archivos generados por el compilador, combinarlos y a partir de ello crear un ejecutable [3]. Por esta misma razón es esencial en el proceso de compilación, ya que de no existir un linker después de compilar un código fuente, no se podría correr un programa completo ejecutando sólo un archivo.

*9. Describa el flujo de trabajo básico en Git para agregar cambios a un repositorio.*

Primero, se debe de utilizar el comando "git add" para añadir todos aquellos archivos o directorios que fueron creados o cambiados después del último commit. Una vez que todos los cambios se encuentran en un estado de "staged", se agregan al repositorio local utilizando "git commit", donde usualmente se utilizan las banderas "s" para que el commit quede registrado a nombre del usuario que lo realizó y "m" para añadir un mensaje que describa en que consisten los cambios que se le realizaron al commit. Por último, en caso de que se deseen añadir cambios a un repositorio remoto, se utiliza "git push" para cargar los cambios del repositorio local al repositorio remoto.

*10. Defina qué significa inicializar y declarar una variable.*

En C++, es necesario antes de atribuirle un valor a una variable determinar de que tipo es esta variable, ya que esta es la forma en la que el compilador decreta cuanto almacenamiento tiene que apartar en la memoria para esta variable. Entonces, se le llama declarar una variable al uso de una línea de código en la que simplemente se escribe de que tipo es la variable y su nombre, como lo puede ser "int a". Por otra parte, "incializar una variable" hace referencia al momento en donde se le atribuye por primera vez en el código un valor a esta, como sería siguiendo el ejemplo anterior "int = 0". Es necesario destacar que al no inicializar la variable esta puede tener un valor "basura", que suele ser tomado de algún proceso o programa que se haya ejecutado antes de escribir el código y que haya utilizado dicho espacio de memoria.

*11. ¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?*

Se le llama sobrecarga de funciones al uso de dos o más funciones con el mismo nombre, pero que reciben parámetros diferentes, ya sea por su cantidad o tipo. Uno de los beneficios principales de esta práctica, es el de contar con un código más legible y mantenible, ya que utilizando sobrecarga en vez de tener funciones con propósitos similares y diferente nombre (como podrían ser suma_ints y suma_floats) se puede contar con funciones del mismo nombre; en este caso el programador no tiene que preocuparse por cual funcion está aplicando, simplemente el compilador va a interpretar a cual función se refiere de acuerdo a los parámetros que ingresa el programador. La sobrecarga además, permite ahorrar espacio en la memoria al declarar el mismo nombre para varias funciones.[4]

*12. ¿Qué es un puntero y cómo se utiliza? Explique con un ejemplo de la vida real.*

Un puntero en C++ se trata de una variable que almacena la dirección de memoria de otra variable. Cabe destacar que esta variable será de tipo puntero y existen diferentes tipos de punteros para representar un puntero hacia cualquier tipo de variable, objeto o clase (puntero entero, puntero flotante y más). La forma de uso más general de un puntero es la de modificar el valor de las variables estando fuera de scope (modificar valores de variables del main, desde una función a la cual se le pasan estos parámetros por referencia) y modificar datos de una estructura también fuera de su scope. Una forma de explicar punteros puede ser un letrero en una carretera que indica la dirección de una ciudad, si el conductor sigue la dirección del letrero eventualmente llegará a la ciudad; de la misma forma va a actuar el compilador cuando tope con una variable de tipo puntero, ya que esta lo guiará hacia la dirección donde se encuentra el contenido de esa variable.

*13. ¿Qué es un branch (rama) en Git y cómo se utiliza?*

Los branches en git son bifurcaciones de un mismo proyecto, en donde los programadores pueden aplicar y probar ciertos cambios sin afectar el proyecto como tal. La rama principal del proyecto se llama "main", a partir de esta se suelen crear distintas ramas en donde los programadores trabajan por separado y una vez que consideran que pueden implementar sus cambios al branch main, combinan las ramas (merge).

*14. ¿Cuál es la principal diferencia entre un bucle do-while y un bucle while?*

La diferencia principal es que el bucle do-while se ejecutará sí o sí al menos una vez, mientras que existe la posibilidad de que un bucle while no se ejecute ni una sóla vez. Esto es posible ya que en el bucle do-while se ejecuta primero el bloque lógico y después se pregunta por la condición, mientras que en el bucle while no se ejecuta el bloque lógico si no se cumplió con la condición desde un principio.

*15. Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp
en C++. Describa el propósito específico de cada tipo de archivo.*

Es totalmente necesario dividir el código en archivos por varias razones, una de ella es mantener un código ordenado y que de esta forma sea más sencillo de leer e interpretar para algún programador que no haya sido parte del desarrollo de este. Otra razón es que esta práctica hace que el código sea mantenible; es decir, que sea más sencillo modificar el código tiempo después de su desarrollo en caso de que resulte necesario. En cuánto a los propósitos de cada archivo, el archivo .hpp es llamado "headerfile", y en este archivo se declaran todas las funciones y clases que van a ser utilizadas en el main; esto a su vez carga en el procesador todas estas declaraciones. El archivo .cpp adicional al main es donde se definen cada una de las funciones y clases que fueron declaradas en el headerfile. De esta forma, en el main sólamente se necesitará incluir el archivo .hpp para permitir llamar o instanciar todas las funciones y clases creadas.

*16. ¿Dónde y cómo se guardan las variables que se crean en C++? Explique la diferencia
entre el almacenamiento de variables locales y globales.*

En C++ se generan distintos espacios de memoria para guardar variables, el espacio en donde se guarda cada una de las variables se determina de acuerdo a la forma en que se declararon estas mismas (si es una variable estática, global, constante u otra). En el caso de las variables locales, estas se guardan en un espacio denominado "Stack", mientras que las variables globales se guardan en otro espacio de memoria junto con las variables estáticas.

*17. ¿Cuál es la diferencia entre pasar parámetros por valor, por referencia y por puntero?*

Al pasar parámetros por valor a una función, esta generará una copia de la variable dentro de su scope, por lo que en caso de modificar el valor de dicha variable en la función, no se modificará el contenido de la variable que fue pasada como parámetro. En contraste, al pasar un parámetro por referencia o por puntero, se está dando la dirección de memoria de la variable, por lo que si se modifica el valor de la variable dentro de la función, se modificará de igual manera el valor de la variable original. La diferencia entre pasar el parámetro por referencia o por puntero, es que al pasar por puntero siempre que se haga uso del contenido de la variable dentro de la función, habrá que colocar el símbolo "*".

*18. Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección
apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese
arreglo mediante el puntero.*

Un arreglo de C++ en memoria se guarda en un espacio continuo; es decir, todos los elementos del arreglo están guardados en espacios que se encuentran uno tras otro. Por lo tanto, al crear un puntero hacia un array la dirección de memoria a la que este apunta inicialmente va a coincidir con la dirección de memoria del primer elemento del arreglo. Posteriormente, se puede acceder a los demás elementos del arreglo utilizando la sintaxis "ptr + n" (donde "ptr" es el nombre de la variable de tipo puntero y n el enésimo elemento que está después del primero ); de esta forma, C++ interpreta de acuerdo al tipo de variables que almacena el array, cuantos bytes debe trasladarse en memoria para encontrar el elemento que sigue.

*19. Explique para qué son empleados los punteros dobles en C++. Proporcione ejemplos
de situaciones en las que los punteros dobles son necesarios o beneficiosos.*

Los punteros dobles son empleados al asginar memoria dinámica a arreglos multidimensionales. También, son utilizados para almacenar cierto tipo de datos como párrafos de documentos, oraciones o palabras. Otro uso de los punteros dobles es el utilizarlos como argumentos de una función para manipular la dirección almacenada en el puntero simple [5].

*20. ¿Para qué se utiliza la directiva #ifndef?*

Esta directiva se utiliza siempre que se escribe un headerfile y tiene el propósito de no declarar por segunda vez constantes, funciones, estructuras u otras que por alguna razón ya hayan sido declaradas.

*21. ¿Qué es el puntero this en C++?*

Este puntero se utiliza para apuntar dentro de una clase al propio objeto que va a ser creado a partir de esta. Suele utilizarse para pasar el objeto como parámetro a otro método y  para apuntar hacia la variable que representa el propio objeto. [6]

*22. ¿Cuál es la diferencia entre un arreglo y una lista en C++?*

La principal diferencia entre un arreglo y una lista, es que no se puede modificar el tamaño de un arreglo después de su creación, mientras que las listas si pueden aumentar su tamaño después de ser creadas. Otra diferencia es que un arreglo puede sólo puede contener elementos del mismo tipo (ya sean enteros, flotantes, dobles); mientras que una lista puede contener elementos de diferentes tipos [7].

*23. ¿Investigue qué es un memory leak?*

Un memory leak que traducido al español significa "fuga de memoria", ocurre cuando un programa no libera la memoria que ya no necesita; esto eventualmente provoca una acumulación continua de memoria que provoca un consumo excesivo de los recursos del dispositivos y puede llegar a ocasionar fallos [8].

**Referencias**

- [1] Afreen, S.(2023). *Simplilearn*. Último acceso: 2024-03-25, desde https://www.simplilearn.com/tutorials/git-tutorial/merge-conflicts-in-git#:~:text=Git%20merge%20conflict.-,What%20is%20a%20Git%20Merge%20Conflict%3F,on%20different%20lines%20or%20branches.
- [2] *GitHub Docs*, Último acceso: https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/about-pull-requests
- [3] Gómez Álvarez P.(2021). *IA Notes*. Último acceso: 2024-03-25
- [4] Equipo Udacity (2021). *Udacity*. Último acceso: 2024-03-25, desde https://www.udacity.com/blog/2021/09/cp-function-overloading-what-you-need-to-know.html
- [5] *Geek for Geeks*. Último acceso: 2024-03-25, desde https://www.geeksforgeeks.org/c-pointer-to-pointer-double-pointer/
- [6] *JavaTPoint*, Último acceso: 2024-03-25, desde https://www.javatpoint.com/cpp-this-pointer
- [7] *Geek for Geeks*. Último acceso: 2024-03-25, desde https://www.geeksforgeeks.org/what-is-the-difference-between-lists-and-arrays/
- [8] Redacción KeepCoding.(2023). *KeepCoding*. Último acceso: 2024-03-25, desde https://keepcoding.io/blog/que-es-un-memory-leak-y-como-evitarlo/