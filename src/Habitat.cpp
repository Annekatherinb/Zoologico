//
// Created by annek on 4/04/2023.
//

#include "Habitat.h"


Habitat::Habitat(string tipo) :  tipo(tipo) {}
Habitat::Habitat(string humedad, string clima):humedad(humedad), clima(clima){}

string Habitat::getTipo(){
    return this->tipo;
}
string Habitat::setTipo(string tipo){
    this->tipo= tipo;
}
void Habitat::caracteristicas(){
    cout<<"Ingrese el clima del habitad:\n";
    std::cin>> clima;

    cout<<"Ingrese la humedad del habitad:\n";
    std::cin>> humedad;
}
void Habitat::mostrarCaracteristicas() {
    cout<<"Estas son las caracteristicas del habitad\n"<< "humedad: "<<humedad<< "clima: "<<clima;
}


