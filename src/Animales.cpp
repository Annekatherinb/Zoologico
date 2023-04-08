//
// Created by annek on 4/04/2023.
//

#include "Animales.h"
#include "Zoo.h"

using std::string;
using std::cout;
using std::endl;
using std::getline;
using std::cin;

Animales::Animales(string nombre, string especie, string habitat, string alimentacion, string salud, int id, int edad, int juego, int horasSueno):
    nombre(nombre),
    especie(especie),
    habitat(habitat),
    alimentacion(alimentacion),
    salud(salud),
    id(id),
    edad(edad), juego(juego), horasSueno(horasSueno){}

string Animales::getNombre(){
    return this->nombre;
}
string Animales::setNombre(string nombre){
    this->nombre=nombre;
}

string Animales::getEspecie(){
    return this->especie;
}
string Animales::setEspecie(string especie){
    this->especie=especie;
}

string Animales::getHabitat(){
    return this->habitat;
}
string Animales::setHabitat(string habitat){
    this->habitat=habitat;
}

string Animales::getAlimentacion(){
    return this->alimentacion;
}
string Animales::setAlimentacion(string alimentacion){
    this->alimentacion=alimentacion;
}

string Animales::getSalud(){
    return this->salud;
}
string Animales::setSalud(string salud){
    this->salud=salud;
}

int Animales::getId(){
    return this->id;
}
int Animales::setId(int id){
    this->id=id;
}

int Animales::getEdad(){
    return this->edad;
}
int Animales::setEdad(int edad){
    this->edad=edad;
}
int Animales::getJuego() {
    return this->juego;
}
int Animales::setJuego(int juego) {
    this->juego=juego;
}

int Animales::getHorasSueno(){
    return this->horasSueno;

}
int Animales::setHorasSueno(){
    this->horasSueno = horasSueno;
}

void Animales::jugando(int id) {
    Zoo* pTemp;
    Animales* pAnimal;
    bool verificador = pTemp->buscar(id);
    if(verificador == true){
        if(pAnimal->getJuego() == 0){
            cout<<"El animal esta jugando\n";
            pAnimal->setJuego(1);
        }else{
            cout<<"Este animal no puede jugar porque ya jugo\n";
        }
    }else{
        cout<<"Este animal no se encuentra en este zoologico\n";
    }

}

void Animales::dormir(int id) {
    Zoo* pTemp;
    int suenoIngresado,horasMax,corrector=0;
    Animales* pAnimal;
    bool verificador = pTemp->buscar(id);
    if(verificador == true){
        while(corrector==0){
            cout<<"Digite las horas a dormir"<<endl;
            cin>>suenoIngresado;
            horasMax=suenoIngresado*1.5;
            if(pAnimal->getHorasSueno()>=suenoIngresado && pAnimal->getHorasSueno()<=horasMax){
                cout<<"El animal esta durmiendo\n";
                corrector=1;
            }else{
                cout<<"Horas de sueno fuera del limite sano para el animal\n";
            }
        }
    }else{
        cout<<"Este animal no se encuentra en este zoologico\n";
    }
}
