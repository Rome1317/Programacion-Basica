MANUAL DE USUARIO
-----------------------------------------------------------------
Este programa se realizo con el proposito de registrar y calificar alumnos.
Los alumnos registrados se pueden buscar, modificar y eliminar.
Ademas de guardarse en una base de datos en excel para la lectura del usuario.

INSTRUCCIONES DE USO

El programa funciona ingresando las teclas que muestra en pantalla.
Al inciar, la pantalla muestra un menu con las opciones que estan a continuación.
Cada una de estas opciones tiene una letra asignada. 
El usuario presiona la tecla de la opcion que desea, acompañada con la tecla ENTER
Las teclas que puede ingresar pueden ser desde letras a numeros.

REQUISITOS GENERALES
- Este programa solo se puede utilizar en Windows.

MENU
--------------------------------------------------------------------
En el menu se muestra las opciones que el usuario puede elegir.

Este contiene:
- A. Alumnos
- B. Matriculas
- C. Base de Datos
- D. Modificar
- E. Manual de Usuario
- F. Salir

El usuario ingresa la letra que corresponde a la opcion.
La letra ingresada puede estar en mayuscula o minuscula.

ALUMNOS
----------------------------------------------------------------------
Al ingresar a Alumnos, el usuario puede registrar, buscar y ver alumnos.

Este contiene:
1. Registrar
2. Buscar
3. Lista

El usuario ingresa el numero que corresponde a la opcion.

REGISTRAR

Al momento de registrar, el programa muestra todos los datos requeridos.

Datos:
- Nombre(s)
- Apellido(s)
- Matricula [Esta tiene que ser unica.]
- Email [Debe incluir @ y ".com".]
- Telefono [Debe de ser de al menos 8 digitos y ser menor a 12.]
- Calle
- Colonia
- Calificacion 1 [Las calificaciones aceptan valores del 0 a 100 con valores truncados de 2 decimales.]
- Calificicacion 2
- Calificacion 3

Si el usuario no desea registrar una calificacion este debe de poner un numero menor a 0.

En caso de no registrar una calificacion, la calificacion final sera 0.

El promedio se calcula de la siguiente manera:
La primera calificacion constribuye un 30% de la calificacion final, la segunda calificacion 45% y la tercera 25%.

La calificacion final es la suma del porcentaje de cada una.

BUSCAR

Al momento de buscar un alumno, se muestran 2 opciones.

Buscar por:
1. Apellido(s) 
2. Matricula

Una vez ingresado los apellido(s) o la matricula, la pantalla te muestra el alumno con todos sus datos.

Y te pregunta si desea modificar algo.

Quieres modificar algo?
1. Si
2. No

Si la tecla ingresada es 1, el programa te lleva a modificar.
Si la tecla ingresada es 2, el programa vuelve a menu.

LISTA

Al ingresar a Lista, el programa te muestra solo los nombres y apellidos de los alumnos registrados.

Al finalizar la opcion seleccionada, aparece la opcion de regresar al menu.

Regresar al Menu:
1. Si
2. No

Si la tecla ingresada es 1, el programa vuelve a menu.
Si la tecla ingresada es 2, el programa se termina y se guarda en un archivo los cambios realizados.

MATRICULAS
----------------------------------------------------------------------------
Al ingresar a Matriculas, el usuario puede buscar a alumnos y ver matriculas.

Este contiene:
1. Buscar
2. Lista

El usuario ingresa el numero que corresponde a la opcion.

BUSCAR
LISTA

BASE DE DATOS
----------------------------------------------------------------------------
Al ingresar a Base de Datos, el usuario puede ver la lista de alumnos registrados con todos sus datos.

La lista se muestra horizontalmente en este orden:
- Matricula
- Apellido(s)
- Nombre(s)
- Email
- Telefono
- Numero de Casa
- Calle
- Colonia
- Calificacion 1
- Calificacion 2
- Calificacion 3
- Promedio [Calificacion Final]

Para volver al menu, el usuario presiona ENTER.

MODIFICAR
-------------------------------------------------------------------------------
Al ingresar a Modificar, el usuario aqui busca, modifica o elimina los datos de los alumnos.
El usuario puede modificar todos los datos ingresados de un alumno.

Este contiene:
Modificar:
- A. Apellido(s)
- B. Nombre(s)
- C. Matricula
- D. Email
- E. Telefono
- F. Calle
- G. Colonia
- H. Numero de Casa
- I. Calificacion 1
- J. Calificacion 2
- K. Calificacion 3
- L. Eliminar alumno

Una vez ingresada la letra, el programa te muestra el antiguo dato y te pide el nuevo.

La pantalla despues te muestra los datos del alumno con el dato modificado.

ELIMINAR

Si se selecciona la opcion de eliminar alumno, el programa borra todos los datos de ese alumno.

MANUAL DE USUARIO
------------------------------------------------------------------------------
Al ingresar a Manual de Usuario, el programa abre este archivo para la lectura del usuario.

Para volver al menu, el usuario presiona ENTER.

SALIR
-------------------------------------------------------------------------------
Al ingresar a Salir, el programa se cierra.

Aqui se guarda todo lo hecho por el usuario en un archivo excel para la lectura del mismo.
Ademas se guarda tambien un archivo de texto en binario para que el programa pueda leerlo.
Esto por si el usuario vuelve a entrar al programa y continue con los datos anteriormente ingresados.
Estos archivos se guardan en la carpeta donde se encuentra el codigo.