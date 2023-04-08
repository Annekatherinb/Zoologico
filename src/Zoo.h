//
// Created by annek on 4/04/2023.
//

#ifndef ZOOLOGICO_ZOO_H
#define ZOOLOGICO_ZOO_H

#include "Animales.h"
#include "Habitat.h"
#include "Alimentacion.h"
#include <string>
#include <iostream>
#include <vector>
#include <iterator>


using std::string;
using std::cout;
using std::endl;
using std::getline;
using std::unordered_map;
using std::make_pair;
using std::iterator;
using std::vector;

class Zoo{
private:
    string nombre;
    unordered_map<int,Animales*>mapaAnimales;
    unordered_map<string,vector<Animales*>>mapaHabitado;
    vector<Habitat*> vector1;


public:

    Zoo(string nombre);
    void recibirAnimal(string nombre, string especie, string habitat, string alimentacion, string salud, int id, int edad, int horasSueno);
    string getNombre();
    string setNombre(string nombre);
    void mostrarAnimales();
    void agregarHabitad(string tipo);
    void mostrar();
    void animalHabitad(int id, string habitad);
    void mostrarAnimalHabitat();
    bool buscar(int id);
};



#endif //ZOOLOGICO_ZOO_H
