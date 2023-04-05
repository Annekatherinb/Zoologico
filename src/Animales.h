//
// Created by annek on 4/04/2023.
//

#ifndef ZOOLOGICO_ANIMALES_H
#define ZOOLOGICO_ANIMALES_H
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::getline;

class Animales {
private:

    Animales(string nombre, string especie, string habitat, string alimentacion, string salud, int id, int edad,
             int horasSueno, int jugo);

    string especie;
    string habitat;
    string nombre;
    string alimentacion;
    string salud;
    int id;
    int edad;
    int horasSueno;
    int jugo;

public:



};


#endif //ZOOLOGICO_ANIMALES_H
