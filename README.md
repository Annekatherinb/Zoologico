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


![Diagrama de clases](https://raw.githubusercontent.com/Annekatherinb/Zoologico/77749acae5096afb1434a22bff94b96d498d9d3b/Diagrama%20de%20estado.drawio%20(2).png?token=A5PMFQOTLI2D4XZ6ONIR7MLEGNTWC)  
  
    
 1. ### Funcionalidad del Programa
