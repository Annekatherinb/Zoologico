//
// Created by annek on 4/04/2023.
//

#include "Animales.h"

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


