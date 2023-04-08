#include <string>
#include <iostream>
#include "src/Animales.h"
#include "src/Alimentacion.h"
#include "src/Zoo.h"
#include "src/Habitat.h"
#include <stdlib.h>

using std::string;
using std::cout;
using std::endl;
using std::getline;
using std::cin;

int contadorId = 0;

void agregarAnimales(Zoo*Zoo){
    string nombreTemp, habitatTemp, especieTemp, alimentaciontemp, saludTemp;
    int edadTemp, prueba, comprobador=0, horasTemp;

    cout<<"Ingrese el nombre del animal"<<endl;
    cin.ignore();
    getline(cin,nombreTemp,'\n');

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


    cout<<"Ingrese la especie del animal"<<endl;
    cin.ignore();
    getline(cin,especieTemp,'\n');

    while(comprobador==1){
        cout<<"Ingrese la alimentacion del animal\n 1.Carnivoro. \n 2.Herviboro. \n 3.Omnivoro."<<endl;
        cin>>prueba;
        if(prueba==1){
            comprobador=2;
            alimentaciontemp="Carnivoro";
        }else if(prueba==2){
            comprobador=2;
            alimentaciontemp="Herviboro";
        }else if(prueba==3){
            comprobador=2;
            alimentaciontemp="Omnivoro";
        }else{
            cout<<"Opcion invalida"<<endl;
        }
    }

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

    while(comprobador==3){
        cout<<"Ingrese la edad del animal"<<endl;
        cin>>edadTemp;
        if(edadTemp>=0 && edadTemp<200){
            comprobador=0;
        }else{
            cout<<"Edad invalida"<<endl;
        }
    }
    cout<<"Ingrese la cantidad de horas que duerme"<<endl;
    cin>>horasTemp;


    Zoo->recibirAnimal(nombreTemp,especieTemp,habitatTemp,alimentaciontemp,saludTemp,contadorId,edadTemp, horasTemp);
    contadorId++;
}

void agregarHabitad(Zoo* Habitad){
    string tipoTemp;
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

void animalHabitad(Zoo* Habitad){
    int idTemp;
    string habitadTemp;
    cout<<"Ingrese el id del animal al que desea asignarle un habitad: \n";
    cin>>idTemp;
    cout<<"Ingrese el habitad al que desea agregarlo: \n";
    cin>>habitadTemp;
    Habitad->animalHabitad(idTemp, habitadTemp);
}

void Menu(Zoo* zoo){
    int op = 0;
    Habitat* pHabi;

    do{
        cout<<"\n**** Bienvenidos al Zoologico "<< zoo->getNombre()<<"****\n";
        cout << "1. Ingrese un animal\n";
        cout << "2. Mostrar todos los animales\n";
        cout<<"3. Digite los habitat de los Animales\n";
        cout<<"4. Asignar habitat a un Animal\n";
        cout<<"5. Mostrar los habitats con los animales\n";
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
            default:
                break;
        }

    }while(op != 0);
}

int main(){
    Zoo* pZoo = new Zoo("South Hills");
    Menu(pZoo);


    delete pZoo;
    return 0;


}