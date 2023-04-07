//
// Created by annek on 4/04/2023.
//

#include "Habitat.h"


Habitat::Habitat(string tipo) :  tipo(tipo) {}

string Habitat::getTipo(){
    return this->tipo;
}
string Habitat::setTipo(string tipo){
    this->tipo= tipo;
}

