MANUAL DE USUARIO
-----------------------------------------------------------------
Este programa se realizó con el propósito de registrar y calificar alumnos.
Los alumnos registrados se pueden buscar, modificar y eliminar.
Además de guardarse en una base de datos en Excel para la lectura del usuario.

INSTRUCCIONES DE USO

El programa funciona ingresando las teclas que muestra en pantalla.
Al iniciar, la pantalla muestra un menú con las opciones que están a continuación.
Cada una de estas opciones tiene una letra asignada. 
El usuario presiona la tecla de la opción que desea, acompañada con la tecla ENTER
Las teclas que puede ingresar pueden ser desde letras a números.

Al iniciar el programa por primera vez, la pantalla muestra la lectura de archivo.
Como no se ha creado todavía el archivo donde se guarda la información, la pantalla mostrara:

"Archivo inexistente o problemas para abrirlo"

Para continuar, es necesario pulsar cualquier tecla. El programa te llevara al menú.

REQUISITOS GENERALES
- Este programa solo se puede utilizar en Windows.

MENU
--------------------------------------------------------------------
En el menú se muestra las opciones que el usuario puede elegir.

Este contiene:
- A. Alumnos
- B. Matriculas
- C. Base de Datos
- D. Modificar
- E. Manual de Usuario
- F. Salir

El usuario ingresa la letra que corresponde a la opción.
La letra ingresada puede estar en mayúscula o minúscula.

ALUMNOS
----------------------------------------------------------------------
Al ingresar a Alumnos, el usuario puede registrar, buscar y ver alumnos.

Este contiene:
1. Registrar
2. Buscar
3. Lista

El usuario ingresa el número que corresponde a la opción.

REGISTRAR

Al momento de registrar, el programa muestra todos los datos requeridos.

Datos:
- Apellido(s)
- Nombre(s)
- Matricula [Esta tiene que ser única.]
- Email [Debe incluir @ y ".com".]
- Teléfono [Debe de ser de al menos 8 dígitos y ser menor a 12.]
- Calle
- Colonia
- Calificación 1 [Las calificaciones aceptan valores del 0 a 100 con valores truncados de 2 decimales.]
- Calificación 2
- Calificación 3

Si el usuario registra una calificación mayor a 100, la calificación será 100.

Si el usuario no desea registrar una calificación este debe de poner un número menor a 0.

En caso de no registrar una calificación, la calificación final será 0.

El promedio se calcula de la siguiente manera:

La primera calificación contribuye un 30% de la calificación final, la segunda calificación 45% y la tercera 25%.
La calificación final es la suma del porcentaje de cada una.

BUSCAR

Al momento de buscar un alumno, se muestran 2 opciones.

Buscar por:
1. Apellido(s) 
2. Matricula

Una vez ingresado los apellido(s) o la matricula, la pantalla te muestra el alumno con todos sus datos.

Y te pregunta si desea modificar algo.

¿Quieres modificar algo?
1. Si
2. No

Si la tecla ingresada es 1, el programa te lleva a modificar.
Si la tecla ingresada es 2, el programa vuelve a menú.

LISTA DE ALUMNOS

Al ingresar a Lista, el programa te muestra solo los nombres y apellidos de los alumnos registrados.

Al finalizar la opción seleccionada, aparece la opción de regresar al menú.

Regresar al Menú:
1. Si
2. No

Si la tecla ingresada es 1, el programa vuelve a menú.
Si la tecla ingresada es 2, el programa se termina y se guarda en un archivo los cambios realizados.

MATRICULAS
----------------------------------------------------------------------------
Al ingresar a Matriculas, el usuario puede buscar a alumnos y ver matriculas.

Este contiene:
1. Buscar
2. Lista

El usuario ingresa el número que corresponde a la opción.

BUSCAR

Explicado en Alumnos.

LISTA DE MATRICULAS

Al ingresar a Lista, el programa te muestra solo las matrículas de los alumnos registrados.

BASE DE DATOS
----------------------------------------------------------------------------
Al ingresar a Base de Datos, el usuario puede ver la lista de alumnos registrados con todos sus datos.

La lista se muestra horizontalmente en este orden:
- Matricula
- Apellido(s)
- Nombre(s)
- Email
- Teléfono
- Numero de Casa
- Calle
- Colonia
- Calificación 1
- Calificación 2
- Calificación 3
- Promedio [Calificación Final]

Para volver al menú, el usuario presiona ENTER.

MODIFICAR
-------------------------------------------------------------------------------
Al ingresar a Modificar, el usuario aquí busca, modifica o elimina los datos de los alumnos.
El usuario puede modificar todos los datos ingresados de un alumno.

Este contiene:
Modificar:
- A. Apellido(s)
- B. Nombre(s)
- C. Matricula
- D. Email
- E. Teléfono
- F. Calle
- G. Colonia
- H. Numero de Casa
- I. Calificación 1
- J. Calificación 2
- K. Calificación 3
- L. Eliminar alumno

Una vez ingresada la letra, el programa te muestra el antiguo dato y te pide el nuevo.

La pantalla después te muestra los datos del alumno con el dato modificado.

ELIMINAR

Si se selecciona la opción de eliminar alumno, el programa borra todos los datos de ese alumno.

MANUAL DE USUARIO
------------------------------------------------------------------------------
Al ingresar a Manual de Usuario, el programa abre este archivo para la lectura del usuario.

Para volver al menú, el usuario presiona ENTER.

SALIR
-------------------------------------------------------------------------------
Al ingresar a Salir, el programa se cierra.

Aquí se guarda todo lo hecho por el usuario en un archivo Excel para la lectura del mismo.
Además, se guarda también un archivo de texto en binario para que el programa pueda leerlo.
Esto por si el usuario vuelve a entrar al programa y continúe con los datos anteriormente ingresados.
Estos archivos se guardan en la carpeta donde se encuentra el código.
