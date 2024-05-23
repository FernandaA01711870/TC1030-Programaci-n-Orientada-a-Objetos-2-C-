# TC1030 Programación Orientada a Objetos 2

## Sistema de gestión de una escuela

**Problematica**

El director de una escuela primaria se ha dado cuenta de la necesidad de un sistema de gestión para tener un mejor control sobre los alumnos, profesores, grupos, salones y el material con el que cada salón cuenta.

Es por esto que decidió crear una estructura de clases que le permitirá manejar la organización en la institución, permitiendo el registro de profesores y su vinculación con un grupo, los profesores solo pueden tener un grupo a cargo y un grupo solo contara con un profesor. De igual forma los grupos están compuestos por alumnos, los alumnos no pueden estar inscritos en la escuela si no son parte de su grupo y solo pueden pertenecer a uno.

Cada salón le pertenece a un solo grupo y los salones contaran con material escolar como: mesas, sillas, pizarrones, etc.. 

## Funcionalidad
El programa permitirá que los profesores asignen calificaciones a sus alumnos, también les permitirá a los alumnos calcular su promedio y a base de este determinar si a probaron la materia o no.

Los grupos están asociados a un profesor, en los grupos se permitirá el registro de alumnos.

En los salones se  podrá agregar material escolar.

## Diagrama UML
Para tener una forma clara de como funcionara el programa se ha creado un diagrama UML que nos permite visualizar la relación que habrá entre las clases, que métodos se usaran en cada una y como se comunicaran entre ellas.

![Escuela]([https://github.com/FernandaA01711870/TC1030-Programaci-n-Orientada-a-Objetos-2-C-/assets/142357001/9f1516f1-169c-4df5-9322-d6ca9f905f68](https://github.com/FernandaA01711870/TC1030-Programaci-n-Orientada-a-Objetos-2-C-/assets/142357001/a32ccfc2-ac8e-4eeb-b1c5-da9614401b55](https://private-user-images.githubusercontent.com/142357001/333023272-a32ccfc2-ac8e-4eeb-b1c5-da9614401b55.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3MTY0MzUyMDUsIm5iZiI6MTcxNjQzNDkwNSwicGF0aCI6Ii8xNDIzNTcwMDEvMzMzMDIzMjcyLWEzMmNjZmMyLWFjOGUtNGVlYi1iMWM1LWRhOTYxNDQwMWI1NS5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjQwNTIzJTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI0MDUyM1QwMzI4MjVaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT02ZWVlM2IwZTllYzg0YTcwNGQyN2E3ZmZjZmJiMmZkYzg5OGU5YzAyNDM2ZDkwN2Y1ZDdmN2U3ZDY4OWVkMDk5JlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZhY3Rvcl9pZD0wJmtleV9pZD0wJnJlcG9faWQ9MCJ9.XLF-LYvroZ9KszkiF6FTzU5dIGHdXjiOO_cfpb7YDd8))

## Consideraciones 

El programa fue desarrollado en C++ bajo el criterio de 'Standard C++ Library' y corre en todos los sistemas operativos.

El programa solo corre en consola. 
Para compilar el programa es necesario tener todos los archivos de nuestras clases y el main en una misma carpeta y especificar la ruta en nuestra consola.

Para compilar el programa con G++:
"g++ persona.h profesor.h alumno.h grupo.h salon.h materialEscolar.h escuela.cpp -o Escuela "

Para correr el archivo en consola escribimos "Escuela.exe" en Windows o "./Escuela" en Linux. 
