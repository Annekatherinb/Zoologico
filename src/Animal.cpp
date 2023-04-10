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

Animal::Animal(string nombre, string especie, string habitat, string alimentacion, string salud, int id, int edad, int juego, int horasSueno):
    nombre(nombre),
    especie(especie),
    habitat(habitat),
    alimentacion(alimentacion),
    salud(salud),
    id(id),
    edad(edad), juego(juego), horasSueno(horasSueno){}

string Animal::getNombre(){
    return this->nombre;
}
string Animal::setNombre(string nombre){
    this->nombre=nombre;
}

string Animal::getEspecie(){
    return this->especie;
}
/*
string Animal::setEspecie(string especie){
    this->especie=especie;
}
*/
string Animal::getHabitat(){
    return this->habitat;
}
/*
string Animal::setHabitat(string habitat){
    this->habitat=habitat;
}
*/

string Animal::getAlimentacion(){
    return this->alimentacion;
}
/*
string Animal::setAlimentacion(string alimentacion){
    this->alimentacion=alimentacion;
}
*/
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

void Animal::jugar(Animal* pAnimal) {
    if(pAnimal->getJuego() == 0){
        cout<<pAnimal->getNombre()<<" esta jugando\n";
        pAnimal->setJuego(1);
    }else{
        cout<<pAnimal->getNombre()<<"no puede jugar porque ya jugo\n";
    }

}

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
void Animal::comer(Animal* animal) {

    if(animal->getAlimentacion() == "carnivoro"){
        cout<<animal->getNombre()<<" esta comiendo carne\n";
    }else if(animal->getAlimentacion() == "herbivoro"){
        cout<<animal->getNombre()<<" esta comiendo plantas\n";
    }else{
        cout<<animal->getNombre()<<" esta comiendo plantas, carne u otro tipo de comida\n";
    }
}

