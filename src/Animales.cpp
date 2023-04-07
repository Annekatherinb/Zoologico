//
// Created by annek on 4/04/2023.
//

#include "Animales.h"
#include "Habitat.h"

using std::string;
using std::cout;
using std::endl;
using std::getline;

Animales::Animales(string nombre, string especie, string habitat, string alimentacion, string salud, int id, int edad):
    nombre(nombre),
    especie(especie),
    habitat(habitat),
    alimentacion(alimentacion),
    salud(salud),
    id(id),
    edad(edad){}

string Animales::getNombre(){
    return this->nombre;
}
string Animales::setNombre(){
    this->nombre=nombre;
}

string Animales::getEspecie(){
    return this->especie;
}
string Animales::setEspecie(){
    this->especie=especie;
}

string Animales::getHabitat(){
    return this->habitat;
}
string Animales::setHabitat(){
    this->habitat=habitat;
}

string Animales::getAlimentacion(){
    return this->alimentacion;
}
string Animales::setAlimentacion(){
    this->alimentacion=alimentacion;
}

string Animales::getSalud(){
    return this->salud;
}
string Animales::setSalud(){
    this->salud=salud;
}

int Animales::getId(){
    return this->id;
}
int Animales::setId(){
    this->id=id;
}

int Animales::getEdad(){
    return this->edad;
}
int Animales::setEdad(){
    this->edad=edad;
}




