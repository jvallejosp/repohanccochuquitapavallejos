Sistema de registro de estudiantes en Java
Programa de consola que registra estudiantes con tres notas, calcula su promedio y dice si aprobaron o desaprobaron.
Integrantes
Hancco Valencia, José Luis
Chuquitapa Colque, Eduardo Gabriel
Vallejos Postigo, José Francisco
Curso: Lenguaje de Programación I
Universidad La Salle, Arequipa
Cómo se ejecuta
Tener instalado el JDK. Para comprobarlo:
```
java -version
javac -version
```
Abrir la terminal en la carpeta del proyecto y compilar:
```
javac SistemaRegistro.java
```
Ejecutar el programa:
```
java SistemaRegistro
```
Aparece el menú. Se escribe el número de la opción y se presiona Enter:
```
==================================
    SISTEMA DE REGISTRO
==================================
1. Registrar estudiante
2. Mostrar estudiantes registrados
3. Calcular promedio general
4. Mostrar cantidad de aprobados
5. Salir
==================================
Seleccione una opción:
```
Uso de cada opción
Opción 1: Registrar estudiante
Se ingresa el nombre y las tres notas. El programa calcula el promedio y la condición.
```
Seleccione una opción: 1

Nombre del estudiante: Ana
Nota 1: 15
Nota 2: 17
Nota 3: 16

Estudiante registrado correctamente.
Promedio: 16.00
Condición: APROBADO
```
Si una nota no está entre 0 y 20, la vuelve a pedir:
```
Nota 1: 25
La nota debe estar entre 0 y 20.
Nota 1: 8
```
Se pueden registrar como máximo 20 estudiantes.
Opción 2: Mostrar estudiantes registrados
```
Seleccione una opción: 2

ESTUDIANTES REGISTRADOS
1. Ana
   Notas: 15.0 - 17.0 - 16.0
   Promedio: 16.00
   Condición: APROBADO
2. Luis
   Notas: 8.0 - 9.0 - 10.5
   Promedio: 9.17
   Condición: DESAPROBADO
```
Opción 3: Calcular promedio general
```
Seleccione una opción: 3

Promedio general: 12.46
```
Opción 4: Mostrar cantidad de aprobados
Cuenta a los estudiantes con promedio de 11 o más.
```
Seleccione una opción: 4

Cantidad de aprobados: 2
```
Opción 5: Salir
```
Seleccione una opción: 5

Gracias por usar el sistema.
```
Capturas de pantalla
Menú principal:
![Menú principal](capturas/01-menu.png)
Registro de un estudiante:
![Registro de estudiante](capturas/02-registro.png)
Validación de notas:
![Validación de notas](capturas/03-validacion.png)
Lista de estudiantes:
![Lista de estudiantes](capturas/04-lista.png)
Promedio general:
![Promedio general](capturas/05-promedio.png)
Cantidad de aprobados:
![Cantidad de aprobados](capturas/06-aprobados.png)
Opción no válida y salida:
![Opción no válida y salida](capturas/07-salir.png)
Preguntas de comprensión
Pregunta 1. ¿Cuál es la diferencia entre JDK, JRE y JVM? ¿Qué función cumple cada uno dentro del entorno Java?
La JVM (Java Virtual Machine) es la que ejecuta el programa. Lee los archivos `.class` que se generan al compilar y los hace funcionar en la computadora. Gracias a ella, un mismo programa funciona en Windows, Linux o Mac.
El JRE (Java Runtime Environment) contiene la JVM y las librerías de Java, como `Scanner`. Sirve para ejecutar programas, pero no para compilarlos.
El JDK (Java Development Kit) contiene el JRE y además las herramientas para programar, como el compilador `javac`. Es lo que necesitamos para hacer este trabajo.
En resumen, el JDK incluye al JRE y el JRE incluye a la JVM.
Pregunta 2. ¿Cuál es la diferencia entre declarar una variable de tipo `int` y una variable de tipo `double`? Presentar un ejemplo de cada una.
El tipo `int` guarda números enteros, sin decimales. El tipo `double` guarda números con decimales.
```java
int cantidad = 20;
double promedio = 16.5;
```
En el programa usamos `int` para la cantidad de estudiantes y de aprobados, y `double` para las notas y los promedios, porque un promedio puede salir con decimales, como 9.17.
Si se dividen dos enteros, el resultado pierde los decimales: `7 / 2` da 3, en cambio `7.0 / 2` da 3.5.
Pregunta 3. ¿Qué diferencias existen entre las estructuras repetitivas `for`, `while` y `do-while`? ¿En qué situaciones utilizarías cada una?
El `for` se usa cuando sabemos cuántas veces se va a repetir, por ejemplo, mostrar los números del 1 al 100.
El `while` revisa la condición antes de repetir, así que puede no ejecutarse nunca. Se usa cuando no sabemos cuántas veces se repetirá. En el programa lo usamos para recorrer los estudiantes registrados.
El `do-while` revisa la condición al final, así que se ejecuta al menos una vez. Es bueno para menús y para pedir datos. En el programa lo usamos para el menú, que se repite hasta elegir la opción 5, y para pedir una nota hasta que esté entre 0 y 20.
Pregunta 4. ¿Qué ventajas ofrece utilizar métodos en Java en lugar de escribir todas las instrucciones dentro del método `main()`?
Los métodos ordenan el programa en partes pequeñas, cada una con una tarea. Así el `main()` queda corto y fácil de entender.
También evitan repetir código. Por ejemplo, el método `pedirNota()` se usa tres veces, una por cada nota, y `condicion()` se usa al registrar y al mostrar la lista.
Además, si hay que corregir algo, se cambia en un solo lugar, y es más fácil encontrar los errores.
