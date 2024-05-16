# TAREA 5

En esta carpeta se pueden encontrar todos los archivos de código fuente utilizados para desarrollar la parte práctica. Además, en esta nota se encuentran las respuestas a la parte teórica de la evaluación y las instrucciones de compilación y ejecución para el código fuente.

## Parte Práctica

Para el programa Validador de Emails se realizó un Makefile (el cual también forma parte de esta sección práctica) en el cual se utilizaron los siguientes targets: "all", "build", "run" y "clean". Por lo que para compilar y ejecutar este programa se puede utilizar el comando "make" el cual ejecuta el target all, que a su vez ejecuta build y consecutivamente run; mientras que después de utilizar el programa se puede ingresar el comando "make clean" para eliminar el directorio de archivos generados posteriores a la compilación del programa.

A continuación se muestra el link donde se encuentra alojada la documentación de Doxygen:

- https://willowy-wisp-dfba61.netlify.app

*Importante: Esta parte práctica fue desarrollada en un entorno Linux; sin embargo el Makefile está adaptado para funcionar tanto en Linux como en Windows. Además, para poder ejecutar el Makefile correctamente es necesario que esté colocado en este mismo directorio.*

## Parte Teórica

### Primera Parte

*1. ¿Qué es una expresión regular y cuál es su propósito en programación?*

Las expresiones regulares consisten en la definición de patrones de caracteres específicos y se utilizan en la programación para buscar cadenas específicas adentro de un texto, validar cadenas, intercambiar cadenas y muchas otras acciones.

*2. ¿Qué significan los caracteres especiales . y * en una expresión regular?*

El punto se utiliza dentro de una expresión regular para representar un carácter que puede contener cualquier valor, como puede ser la expresión ".ar" con par, bar o car. Mientras que el asterisco, representa una repetición de 0 a "n" veces del carácter que le antecede, como puede ser la expresión "de*" para de, dee y incluso d.

*3. ¿Cómo se pueden agrupar subexpresiones en una expresión regular?*

Generalmente, se hace uso de los paréntesis redondos "()" para dentro de un regex, crear una serie de regexs que le permita al programador buscar varios patrones en un texto de forma simúltanea. Es el análogo de aritméticamente, crear una expresión matemática para expresar varias operaciones en conjunto. [1]

*4. ¿Qué función cumple la barra invertida \ en una expresión regular?*

La barra invertida se utiliza cuando se desea que un carácter especial, como puede ser ".", "*" y "?" sean interpretados en la expresión regular como carácteres comunes; para ello es que se coloca el carácter "\" antes del carácter especial.

*5. Explique cómo se pueden capturar coincidencias usando paréntesis en una expresión regular.*

Al declarar dentro del regex un grupo de carácteres como lo puede ser "(elo)", se capturan como coincidencia todas aquellas cadenas de carácteres que incluyen "elo" dentro de sí. En este caso, la expresión regular coincidiría con cadenas como "pelos", "cielo" y "elote".

*6. ¿Cuál es la diferencia entre \d y \D en una expresión regular?*

La diferencia se encuentra en que \d se utiliza para buscar que uno o varios carácteres sean de tipo dígito, mientras que \D busca coincidencias con carácteres que no corresponden a dígitos.

*7. ¿Cómo se representa una clase de caracteres en una expresión regular?*

Los rangos o clases de carácteres se definen dentro de una expresión regular por medio de paréntesis cuadrados "[]".

*8. ¿Cuál es el propósito del modificador $ en una expresión regular?*

Este carácter especial busca cadenas de carácteres que terminen en el carácter que le antecede. Un caso podría ser el de definir $s, que coincidiría con "gatos", "perros" y "a"nimales".

*9. Describa cómo validar una dirección de correo electrónico usando expresiones regulares en C++.*

En C++ es posible trabajar con regex incluyendo en el código la biblioteca "regex". en la cual se definen expresiones regulares por medio de "regex()" y se buscan coincidencias mediante el método "regex_search()". El regex se podría declarar de la forma: "/^([a-zA-Z0-9._%-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})$/".

*10. Discuta las implicaciones de rendimiento de utilizar expresiones regulares en aplicaciones de software. ¿Qué técnicas se pueden aplicar para optimizar una expresión regular compleja, especialmente en contextos donde el tiempo de ejecución es crítico?*

Las expresiones regulares, utilizan métodos que resultan complejos y por tanto, pueden ocasionar una baja en el rendimiento de algunos programos. Para evitar esto se emplean ciertas soluciones; una de ellas es evitar el uso de carácteres especiales en las expresiones regulares, ya que el uso de estos carácteres tiene un mayor costo a nivel de recursos. Otra solución es agrupar regex utilizando subregex, ya que contar con muchas búsquedas separadas utiliza muchos recursos. Por último se tiene la opción de precompilar las regex para ahorrar tiempo de procesamiento. [2]

*11. ¿Qué es un Makefile y cuál es su función en un proyecto de C++?*

Un proyecto de programación (de un lenguaje de compilación) suele compilarse muchas veces; ya sea por depuración o alguna otra razón. El hacer un Makefile permite que al tener dependencias entre los archivos de código fuente, un archivo no sea compilado de nuevo inecesariamente al ser cambiado un archivo que no tiene una dependencia con este. Esto es vital en proyectos más grandes, ya que presenta una reducción considerable en el tiempo de compilación del proyecto. 

*12. ¿Cuál es la diferencia entre una regla implícita y una regla explícita en un Makefile?*

Las reglas explícitas son aquellas instrucciones que indican las dependencias entre archivos y los comandos requeridos para compilar los archivos, mientras que las reglas implícitas actualizan los destinos de los archivos generados durante la compilación. [3]

*13. Explique el propósito de las macros (variables) en un Makefile.*

Las macros suelen utilizarse para almacenar información que va a ser necesaria varias veces dentro del Makefile, esto facilita al programador la tarea la modificación y personalización de este archivo.

*14. ¿Qué es un objetivo (target) en un Makefile y cómo se define?*

En los archivos Makefile se les denomina como "target" a aquellas acciones que el programador desea que se realicen cuando se ejecute el Makefile. Como su propia traducción literal lo dice, describe los objetivos del programador al utilizar el Makefile.

*15. ¿Por qué es útil dividir un proyecto de C++ en múltiples archivos fuente y cómo ayuda el uso de Makefiles en este enfoque?*

El dividir en varios archivos un código C++ aporta legibilidad al código; ya que entre más puntual (pequeño o con objetivo específico) es el código, se hace más fácil de comprender para otros programadores que no realizaron el código. Además, aporta mantenibilidad al código ya que si el código requiere ser modificado, es más fácil buscar donde se debe cambiar el código. Por último, resulta preferible a la hora de obtener errores ya que el programador puede saber en que parte (archivo) del código se encuentra el error.

*16. ¿Cómo se pueden definir dependencias entre los archivos fuente en un Makefile?*

De forma general se puede decir que esto se define mediante reglas explícitas. Normalmente, se suelen agrupar todos los archivos de código fuente de los que depende la compilación con el macro "SOURCES".

*17. Explique cómo se puede compilar un proyecto en diferentes sistemas operativos usando un solo Makefile.*

Para elaborar un Makefile que pueda ser utilizado en diferentes sistemas operativos se pueden utilizar condicionales; en el caso de Make la sintaxis para los condicionales es "ifeq ($(OS, \<sistema operativo\>))", else y endif. A partir de esto, se pueden modificar ciertos comandos para que el Makefile pueda ejecutarse correctamente en distintos sistemas operativos.

*18. ¿Cuál es el propósito de los comandos clean y all en un Makefile?*

El comando "clean" se utiliza para limpiar todos aquellos archivos de salida (archivos de texto, ejecutables y más) que se generan durante la compilación de un programa. Por otra parte, el comando "all" es utilizado para definir un target predeterminado para el Makefile; de esta forma si el usuario compila sin especificar una regla, el Makefile ejecuta la regla colocada en el all.

*19. Describa cómo se pueden pasar argumentos desde la línea de comandos a un Makefile.*

Para empezar, la función main del código fuente debe de tener la definición "int main(int argc, char* argv[])" para poder recibir argumentos por línea de comando. Después se debe declarar una variable no definida en el Makefile en el target que se utiliza para ejecutar el programa (en la mayoría de casos "run"), esta variable además se debe asignar a uno de los argv[] de la función main del código fuente. Por último, al ejecutar el comando, se debe ingresar el argumento de la forma "make run \<variable\> = \<argumento\>", para pasar dicho argumento por línea de comando. [4]

20. Proporcione un ejemplo de una regla en un Makefile que compile un archivo fuente
.cpp a un archivo objeto .o.

*Ejemplo:*

- %.exe: %.cpp
- 	\$(CXX) \$(CXXFLAGS) -c \$< -o \$@

### Segunda Parte

*1. ¿Qué suelen contener las variables CC, CFLAGS, CXXFLAGS y LDFLAGS en un
makefile?*

+ CC: se utiliza generalmente, para referirse al compilador en programas de C.
+ CFLAGS: banderas de compilación (versión del compilador y otras) en programas de C.
+ CXXFLAGS: banderas de compilación en programas de C++.
+ LDFLAGS: banderas para el enlazamiento de archivos en el proceso de compilación para C++.

*2. ¿De qué se compone una regla en un Makefile?*

Todas las reglas se encuentran compuestas de un target, una lista de dependencias y una serie de comandos para construir el target.

*3. Defina qué es un target y cómo se relaciona con sus prerequisitos.*

Como ya se explicó anteriormente, los "target" son aquellas acciones que el programador desea que se realicen cuando se ejecute el Makefile. Para que un target se pueda ejecutar correctamente, es necesario que ciertos archivos o directorios (dependiendo de como esté elaborado el Makefile) hayan sido creados, en caso contrario se obtendrá un error al intentar ejecutar el Makefile; a estos archivos se les denomina "prerequisitos".

*4. ¿Para qué se utiliza la bandera -I, -c y -o del compilador gcc?*

+ -I: especifica el nombre de un directorio adicional al que se desea acceder al compilar.ss
+ -c: especifica el nombre de los archivos de código fuente que recibe el compilador.
+ -o: especifica el nombre de los archivos de salida que se generan mediante la compilación.

*5. ¿Cómo se definen y se utilizan las variables en un Makefile? ¿Qué utilidad tienen?*

Las variables dentro del Makefile se definen simplemente colocando el valor de la variable, el signo "=" y lo que se va a almacenar en la variable; mientras que para utilizarlos se encierran entre paréntesis y se coloca un "$" antes del primer paréntesis.. Su utilidad se encuentra en hacer que el Makefile sea más legible para un programador que no lo haya elaborado y a su vez, que si se desea hacer una modificación se cambie el valor de una variable en vez de o  líneas de código 

*6. ¿Qué utilidad tiene un @ en un Makefile?*

El "@" antecedido por un signo de "$" se utiliza para hacer referencia al nombre del target dentro del código del Makefile. [5]

*7. ¿Para qué se utiliza .PHONY en un Makefile?*

Es un target especial el cual no representa archivos físicos, sólamente acciones que desean realizarse. Es comúnmente utilizado para definir dentro de este el target "clean" que se encarga de eliminar todos los archivos ejecutables.

#Referencias

- [1] 4Geeks. (2024). Último acceso: 2024-05-09, desde https://4geeks.com/es/lesson/regex-tutorial-regular-expression-ejemplo
- [2] Py Pro MX. (2024). Último acceso: 2024-05-09, desde https://www.pypro.mx/app/curso/regex-con-python/mejoras-de-performance-en-aplicaciones-con-regex
- [3] Gonzalez, C. (2022). *Anatronic S.A*. Último acceso: 2024-05-09, desde https://anatronic.com/guia-paso-a-paso-para-compilar-un-driver-en-linux/#:~:text=Las%20Reglas%20expl%C3%ADcitas%20le%20indican,escribirlas%20dentro%20del%20fichero%20makefile.
- [4] Professor Lupoli. Makefiles with Command Line Arguments. Youtube, 2021. https://www.youtube.com/watch?v=mEHJxzvsx3g. Último acceso: 2024-05-09.
- [5] Stackoverflow. (2010). Último acceso: 2024-05-09, desde https://stackoverflow.com/questions/3220277/what-do-the-makefile-symbols-and-mean
