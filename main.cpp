#include <string>
#include <iostream>
#include "src/Animal.h"
#include "src/Zoo.h"
#include "src/Habitat.h"
#include "src/Polar.h"
#include "src/Desertico.h"
#include "src/Selvatico.h"
#include "src/Acuatico.h"


using std::string;
using std::cout;
using std::endl;
using std::getline;
using std::cin;

int contadorId = 0;//Es el id de los animales, comienza en 0 y se utiliza para asignar ordenadamente los id.
//El usuario agrega un animal con sus característica el programa le va a pedir al usuario valores de entrada
//como el nombre, la especie, la alimentacion, etc... del nuevo objeto que va a crear, toda se guarda en las variables
//la funcion principal animal.

void agregarAnimales(Zoo*Zoo){
    string nombreTemp, habitatTemp, especieTemp, alimentaciontemp, saludTemp;
    int edadTemp, prueba, comprobador=0, horasTemp;

    cout<<"Ingrese el nombre del animal"<<endl;
    cin.ignore();
    getline(cin,nombreTemp,'\n');
//Recibe el hábitat y comprueba si la opción ingresada es válida.
    while(comprobador==0){
        cout<<"Ingrese el habitat del animal\n 1.Selvatico. \n 2.Polar. \n 3.Acuatico \n 4.Desertico"<<endl;
        cin>>prueba;
        if(prueba==1){
            comprobador=1;
            habitatTemp="selvatico";
        }else if(prueba==2){
            comprobador=1;
            habitatTemp="polar";
        }else if(prueba==3){
            comprobador=1;
            habitatTemp="acuatico";
        }else if(prueba==4){
            comprobador=1;
            habitatTemp="desertico";
        }else{
            cout<<"Opcion invalida"<<endl;
        }

    }
//Recibe la especie del animal.
    cout<<"Ingrese la especie del animal"<<endl;
    cin.ignore();
    getline(cin,especieTemp,'\n');
//Recibe la alimentación del animal y verifica si la opción es válida...
    while(comprobador==1){
        cout<<"Ingrese la alimentacion del animal\n 1.Carnivoro. \n 2.Herbivoro. \n 3.Omnivoro."<<endl;
        cin>>prueba;
        if(prueba==1){
            comprobador=2;
            alimentaciontemp="carnivoro";
        }else if(prueba==2){
            comprobador=2;
            alimentaciontemp="herbivoro";
        }else if(prueba==3){
            comprobador=2;
            alimentaciontemp="omnivoro";
        }else{
            cout<<"Opcion invalida"<<endl;
        }
    }
//...
    while(comprobador==2){
        cout<<"Ingrese la salud del animal\n 1.Saludable. \n 2.Regular. \n 3.Mala."<<endl;
        cin>>prueba;
        if(prueba==1){
            comprobador=3;
            saludTemp="Saludable";
        }else if(prueba== 2){
            comprobador=3;
            saludTemp="Regular";
        }else if(prueba==3){
            comprobador=3;
            saludTemp="Mala";
        }else{
            cout<<"Opcion invalida"<<endl;
        }
    }
//...
    while(comprobador==3){
        cout<<"Ingrese la edad del animal"<<endl;
        cin>>edadTemp;
        if(edadTemp>=0 && edadTemp<200){
            comprobador=1;
        }else{
            cout<<"Edad invalida"<<endl;
        }
    }
//recibe las horas que duerme el animal.
    cout<<"Ingrese la cantidad de horas que duerme"<<endl;
    cin>>horasTemp;


    Zoo->recibirAnimal(nombreTemp,especieTemp,habitatTemp,alimentaciontemp,saludTemp,contadorId,edadTemp, horasTemp);
    contadorId++;
}

//Esta funcion le pide al usuario que ingrese todos los habitat que seran agregados a un vector; le pide todos los habitat
//para no tener que seleccionar nuevamente la opcion, ademas verifica que sean los habitat que estan prestablecidos, ay que si ingresa
//un habitat que error va a pedir nuevamente que lo digite.

void agregarHabitad(Zoo* Habitad){
    string tipoTemp;
    Habitat* pTemp;
    cout<< "Ingrese todos los habitats: \n";
    int cont = 0;
    while(cont < 4) {
        cin >> tipoTemp;
        if (tipoTemp == "polar" || tipoTemp == "selvatico" || tipoTemp == "desertico" || tipoTemp == "acuatico") {
            Habitad->agregarHabitad(tipoTemp);
            cont++;
        }else{
            cout<<"Habitad invalida ingresela nuevamente\n";
        }
    }
}
//Le pide al usuario que digite el id del animal para poder agregarlo a un hábitat. los valores que digito van a entrar
//a la funcion animal habitad que me hace las verificaciones como: si el animal existe dentro del mapa de animales, si el habitat
//al que se ingresa el animal es respectivamente su habitat de origen, al ingresar valores erroneos automaticamente me los va a
//rechazar.

void animalHabitad(Zoo* Habitad){
    int idTemp;
    string habitadTemp;
    cout<<"Ingrese el id del animal al que desea asignarle un habitad: \n";
    cin>>idTemp;
    cout<<"Ingrese el habitad al que desea agregarlo: \n";
    cin>>habitadTemp;
    Habitad->animalHabitad(idTemp, habitadTemp);
}
//Le pide al usuario que digite una de las 3 órdenes que puede realizar un animal, sea comer, dormir o jugar
//la opcion que se ingresa va a realizar una validacion dentro de funcion funcion a la cual intentamos hacerle sobrecarga
//para que aceptara diferentes argumentos de la misma funcion accion;

void accion(Zoo* accion){
    int op;//La opción como un número.
    string opcion;//Recibe el nombre de la acción a realizar.
    cout<< "Ingresa la accion para que el animal pueda realizarla: \n";
    do{
        cin>>opcion;
        if(opcion!="comer" && opcion!="domir" && opcion!="jugar"){
            cout<<"Opcion invalida, digitela nuevamente.\n";
        }
    }while(opcion!="comer" && opcion!="domir" && opcion!="jugar");
//Convierte la opción escrita a un número que lo representa.
    if(opcion=="comer"){
        op=3;
    }else if(opcion=="domrir"){
        op=2;
    }else{
        op=3;
    }
    accion->acciones(op);
}
//Permite ingresar los alimentos, le dice a al usuario que ingrese la dieta de un animal segun su tipo de alimentacion;
//esto se hace para que el tipo que me ingrese quede como la clave de un mapa que a contener vectores de strings con los
//alimentos que el animal puede comer.

void ingresarAlimento(Zoo* pZoo){
    string tipo;
    cout<<"Digite el tipo animal al que le quiere agregar los alimentos de su dieta:\n";
    cin>>tipo;
    if(tipo == "carnivoro" || tipo == "herbivoro" || tipo == "omnivoro") {
        pZoo->recibirAlimento(tipo);//Envía a una función que recibe una cantidad indeterminada de alimentos.
    }else{
        cout<<"Eso no es valido";
    }
}
//menu con todas las opciones

void Menu(Zoo* zoo){
    int op = 0;

    do{
        cout<<"\n**** Bienvenidos al Zoologico "<< zoo->getNombre()<<"****\n";
        cout << "1. Ingrese un animal\n";
        cout << "2. Mostrar todos los animales\n";
        cout<<"3. Digite los habitat de los Animales\n";
        cout<<"4. Asignar habitat a un Animal\n";
        cout<<"5. Mostrar los habitats con los animales\n";
        cout<<"6. Dieta de los animales\n";
        cout<<"7. Acciones:\n 1.Jugar\n 2.Dormir\n 3.Comer"<<endl;
        cout<< "0. Para salir del sistema\n\n"<< endl;

        cin>> op;
        switch (op) {

            case 1:
                cout<<"A continuacion digite cada una de las siguientes caracteristicas del animal:\n"<< endl;
                agregarAnimales(zoo);
                break;
            case 2:
                cout<<"Estos son los animales que tiene el zoologico hasta el momento:\n";
                zoo->mostrarAnimales();
                break;

            case 3:
                agregarHabitad(zoo);
                zoo->mostrar();
                break;
            case 4:
                animalHabitad(zoo);
                break;
            case 5:
                zoo->mostrarAnimalHabitat();
                break;
            case 6:
                ingresarAlimento(zoo);
                break;
            case 7:
                accion(zoo);
                break;

            default:
                break;
        }

    }while(op != 0);
}

int main(){
    //aqui creamos nuestro zoologico
    Zoo* pZoo = new Zoo("South Hills");
    Menu(pZoo);
    delete pZoo;
    return 0;


}