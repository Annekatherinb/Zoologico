//
// Created by annek on 4/04/2023.
//

#include "Animal.h"
#include "Zoo.h"

using std::string;
using std::cout;
using std::endl;
using std::getline;
using std::cin;
//Constructor del animal
Animal::Animal(string nombre, string especie, string habitat, string alimentacion, string salud, int id, int edad, int juego, int horasSueno):
    nombre(nombre),
    especie(especie),
    habitat(habitat),
    alimentacion(alimentacion),
    salud(salud),
    id(id),
    edad(edad), juego(juego), horasSueno(horasSueno){}
//Set y get de los animales.
string Animal::getNombre(){
    return this->nombre;
}
string Animal::setNombre(string nombre){
    this->nombre=nombre;
}

string Animal::getEspecie(){
    return this->especie;
}

string Animal::getHabitat(){
    return this->habitat;
}

string Animal::getAlimentacion(){
    return this->alimentacion;
}

string Animal::getSalud(){
    return this->salud;
}
string Animal::setSalud(string salud){
    this->salud=salud;
}

int Animal::getId(){
    return this->id;
}
int Animal::setId(int id){
    this->id=id;
}

int Animal::getEdad(){
    return this->edad;
}
int Animal::setEdad(int edad){
    this->edad=edad;
}
int Animal::getJuego() {
    return this->juego;
}
int Animal::setJuego(int juego) {
    this->juego=juego;
}

int Animal::getHorasSueno(){
    return this->horasSueno;

}
int Animal::setHorasSueno(){
    this->horasSueno = horasSueno;
}
//Función que permite jugar y corrobora si ya jugó en el día.
void Animal::jugar(Animal* pAnimal) {
    if(pAnimal->getJuego() == 0){
        cout<<pAnimal->getNombre()<<" esta jugando\n";
        pAnimal->setJuego(1);
    }else{
        cout<<pAnimal->getNombre()<<"no puede jugar porque ya jugo\n";
    }

}
//Permite dormir al animal y comprueba un mínimo y un máximo de horas.
void Animal::dormir(Animal* pAnimal) {

    int suenoIngresado,horasMax,corrector=0;
    while(corrector==0){
        cout<<"Digite las horas a dormir"<<endl;
        cin>>suenoIngresado;
        horasMax=suenoIngresado*1.5;
        if(pAnimal->getHorasSueno()>=suenoIngresado && pAnimal->getHorasSueno()<=horasMax){
            cout<<pAnimal->getNombre()<<"se encuentra durmiendo en momento\n";
            corrector=1;
        }else{
            cout<<"Horas de sueno fuera del limite sano para "<< pAnimal->getNombre()<<std::endl;
        }
    }

}
//Imprime y permite que se compruebe si la opción es válida, comprobando si el número corresponde a una comida
//y si lo que ingresa el usuario es un entero.
void Animal::comer(Animal *pAnimal, int cantidadAlimento) {
    int comida,o=0;
    int verificador=cantidadAlimento;//=Cantidad de alimentos impresos
    cout<<"De los alimentos que puede ver en pantalla escriba cual le quiere dar al animal: \n";
    while(o==0){
        if (!(std::cin >> comida)) {//Comprueba si el dato ingresado es un entero y no otro tipo de dato.
            cout << "Digite un numero por favor. \n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descarta el resto de la entrada.
        }else if( comida>verificador || comida<0){
            cout<<"Numero invalido. \n";
        } else {
            o=1;
        }
    }
    cout<<pAnimal->nombre<<" esta comiendo";

}
