# TC1030 Programación Orientada a Objetos 2

## Sistema de gestión de una escuela

**Problematica**

El director de una escuela primaria se ha dado cuenta de la necesidad de un sistema de gestión para tener un mejor control sobre los alumnos, profesores, grupos, salones y el material con el que cada salón cuenta.

Es por esto que decidió crear una estructura de clases que le permitirá manejar la organización en la institución, permitiendo el registro de un profesor en un grupo, en los grupos solo podrá haber un profesor. De igual forma los grupos están compuestos por alumnos, los alumnos no pueden estar inscritos en la escuela si no son parte de su grupo, solo puede haber 40 alumnos por grupo.

Cada salón le pertenece a un solo grupo y los salones podrán contar con material escolar como: mesas, sillas, pizarrones, etc.. 

## Funcionalidad
El programa permitirá que los profesores asignen calificaciones a sus alumnos, también les permitirá a los alumnos ingresar sus calificaciones y calcular su promedio y a base de este determinar si aprobaron la materia o no.

Se podrá consultar la lista de grupos existentes en la escuela así como la lista de salones registrados.

Se podrán editar los grupos permitiendo el registro de alumnos y de un profesor.
En los salones se podrá agregar material escolar.

## Casos de error

El programa solo admite que en un grupo exista un profesor, si se intenta agregar más de un profesor en los grupos se desplegará un mensaje de error indicándonos que solo puede haber un profesor por grupo. 

De igual forma los grupos tienen un cupo limitado de 41 personas por grupo, si se agregan más se desplegará un mensaje indicando que no es posible agregar más personas al grupo. 

Un caso de error bastante importante a tomar en cuenta es el de ingresar correctamente los datos que se nos piden al momento de querer agregar alumnos o querer registrar un profesor en los grupos. Se debe tener mucho cuidado de ingresar el dato esperado, por ejemplo si se pide edad ingresar un número enteró, en el caso del profesor cuando se pide el número de materias que imparte se debe de ingresar un número entero, de no respetarse esto el programa fallará.

De igual forma al agregar material a los salones solo ingresar el numero de materiales, el programa no aceptara strings o algún otro valor.

## Diagrama UML
Para tener una forma clara de como funcionara el programa se ha creado un diagrama UML que nos permite visualizar la relación que habrá entre las clases, que métodos se usaran en cada una y como se comunicaran entre ellas.

![Escuela](https://github.com/FernandaA01711870/TC1030-Programaci-n-Orientada-a-Objetos-2-C-/assets/142357001/9f4f616d-32e8-471e-855b-b0026da73798)

## Documentación
En el proyecto de utilizaron esencialmente 2 bibliotecas:
iostream : Biblioteca estándar de C++ que nos permite manipular la entrada y salida de datos. Con esta biblioteca podemos varios objetos que nos permiten gestionar la entrada desde teclado y la salida desde pantalla, objetos como: 'cin', 'cout', 'cerr', 'clog'. 
https://cplusplus.com/reference/iostream/ 

vector : Biblioteca estándar de C++ que nos permite crear y trabajar con vectores o arreglos dinámicos 
https://cplusplus.com/reference/vector/

## Consideraciones 

El programa fue desarrollado en C++ bajo el criterio de 'Standard C++ Library' y corre en todos los sistemas operativos.

El programa solo corre en consola. 
Para compilar el programa es necesario tener todos los archivos de nuestras clases y el main en una misma carpeta y especificar la ruta en nuestra consola.

Para compilar el programa con G++:
"g++ persona.h profesor.h alumno.h grupo.h salon.h materialEscolar.h escuela.cpp -o Escuela "

Para correr el archivo en consola escribimos "Escuela.exe" en Windows o "./Escuela" en Linux.

## Correcciones y reevaluación
En la primera entrega se corrigieron los casos en los que el programa dejaría de funcionar y se agrego al github en el apartado de casos de error.

Para la segunda entrega se marco como incorrecto la sobrecarga de métodos, sin embargo ese punto ya estaba implementado como sobrecarga de constructores en todas las clases, no se modifico ni se agrego nada al código en ese aspecto sin embargo se menciona aquí para tenerlo en consideración para la reevaluación.

Para el avance 4 se reviso en clase y se agrego funcionalidad al programa agregando un menú interactivo para que el usuario haga diferentes pruebas.
