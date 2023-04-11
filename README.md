# Zoologico
Hecho por: Steban Rivera - Anne Rincon
### *_PRIMER PROYECTO_*

#### Enunciado  

En este proyecto, se espera que los estudiantes implementen un programa en C++ que simule el funcionamiento de
un zoológico. El programa debe hacer uso de los conceptos de programación orientada a objetos, incluyendo la
creación de clases, relaciones (contenedores), herencia, sobrescritura, sobrecarga y modificadores de acceso.  

El zoológico se compone de diferentes hábitat, cada una de los cuales puede contener varios animales. Cada animal
tiene un nombre, una especie y un hábitat al que pertenece (entre otros).
El programa debe permitir al usuario realizar las siguientes acciones:  

- Añadir un nuevo hábitat al zoológico. Se tiene una serie definida de tipos de hábitat que se pueden crear en el
zoológico: desértico, selvático, polar y acuático.  

- Añadir un nuevo animal a un hábitat existente, garantizando que el hábitat exista y que permita contener el tipo de
animal. El animal debe permitir identificar a qué tipo de hábitat puede pertenecer (como un pingüino que
pertenece al hábitat polar).  

- Listar todos los hábitat del zoológico y sus respectivos animales. Permitiendo a los usuarios ver la información de
los animales, como su nombre, edad, tipo de alimentación, estado de salud y cualquier otro atributo que el
estudiante haya decidido agregar.  

- Realizar una acción en particular para un animal específico (dar órdenes al animal). Para esto debe tomar como
parámetros el identificador del animal y el nombre de la acción a realizar. Las acciones disponibles para los
animales son:  

* Comer, recibiendo el alimento y validando si este se encuentra en la lista aprobada para cada tipo de dieta.
* Dormir, recibiendo el número de horas que el animal debe dormir y validando si es suficiente tiempo de
acuerdo al valor definido para cada animal.
* Jugar, permitiendo saber si el animal ya jugó en el día o no.
- Permitir a los usuarios agregar y editar diferentes tipos de alimentos para los animales en el zoológico. Los
animales deben tener diferentes tipos de alimentación según su dieta: carnívoros, herbívoros, omnívoros.

El programa debe ser capaz de manejar errores de entrada y salida de datos. Por ejemplo, si el usuario intenta
ingresar una edad no válida para un animal, el programa debería informar al usuario del error y solicitar que
ingrese una edad válida.  

**Los estudiantes deben entregar un código C++ completo que implemente todas las funcionalidades especificadas
anteriormente. El proyecto se evaluará en función de la calidad del código, la implementación de los conceptos de
programación orientada a objetos, la funcionalidad del programa y la documentación.**  


![Diagrama de clases](https://github.com/Annekatherinb/Zoologico/blob/8db3c79a58f963509ca67956f5c76e7622687357/Diagrama%20de%20estado.drawio%20(2).png)  
  
    
 1. ### Funcionalidad del Programa
 
Al iniciar el programa se despliega el menú del mismo, en el que debemos poner el número de la opción a elegir, lo primero que se debe hacer es la opción 1, la cual es ingresar un animal, en esta opción nos piden todos los datos del animal el cual debemos ingresarlos uno a uno cuando se nos pregunte.  
*_Una vez hayamos ingresado la cantidad de animales tenemos diferentes opciones para interactuar, el programa puede enseñarnos los animales que están guardados hasta el momento, podemos digitar hábitats nuevos y asignarle hábitat a los animales._*  
Una vez hayamos podido interactuar con las opciones anteriores entramos a otra opción que es fundamental:  
* la opción 6 está la posibilidad de asignar las diferentes dietas, pues hay animales carnívoros, herbívoros y omnívoros, aquí podemos según el tipo de alimentación que elegimos, *_ingresaremos la cantidad de alimentos que nos parezca ideal, seguidamente ingresamos la palabra “no” para parar de ingresar alimentos (teniendo en cuenta que todos los alimentos se guardarán en el tipo de dieta que elegimos al principio)._*  
*  la opción 7 es la más interactiva, al seleccionarla se nos pedirá que digamos que actividad queremos realizar:  
1. por ejemplo se debería escribir algo como “jugar”, con esta opción en específico el programa analizará si el animal que elijas después de seleccionar la opción ya ha jugado, de ser así se expresará que los animales no pueden jugar más de una vez por día y ademas dependiendo del estado de salud del animal se determina de manera puede jugar o si no, puede jugar porque se encuentra revision medica.  
2. al seleccionar la opción “dormir” se preguntará la cantidad de horas a dormir, teniendo en cuenta que cada animal tiene una cantidad de horas mínimas asignadas para dormir, de este modo tiene permitido como mínimo la cantidad de horas que se le asignaron y como máximo la cantidad de horas y un 50% extra de la misma, por ejemplo, si tiene 8 horas asignadas como mínimo, este animal podrá dormir hasta 12 horas.  
3. con la última opción siendo “comer” se desplegará enumeradamente los alimentos que este animal tiene disponibles para comer, según su dieta,  aquí debemos ingresar el número correspondiente al alimento que desea darle, es importante tener en cuenta que cualquier opción diferente a un número comprendido entre los que tienen relacionado un alimento será rechazado e informado en el momento, posteriormente se pedirá nuevamente que se digite un número hasta que la opción ingresada sea válida.    

**El programa se compila desde el build, luego se ejecuta desde el run o desde el debbuger para deteccion de errores.**  
*_Las fotos del funcionamiento del programa se encuentran en un archivo pdf en el git._*

 
 
