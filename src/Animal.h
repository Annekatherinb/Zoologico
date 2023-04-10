//
// Created by annek on 4/04/2023.
//

#ifndef ZOOLOGICO_ANIMAL_H
#define ZOOLOGICO_ANIMAL_H
#include <string>
#include <iostream>

#include <vector>
#include <iterator>
#include <unordered_map>


using std::string;
using std::cout;
using std::endl;
using std::getline;
using std::unordered_map;
using std::make_pair;
using std::iterator;


class Animal {
private:
    string especie;
    string habitat;
    string nombre;
    string alimentacion;
    string salud;
    int id;
    int edad;
    int juego;
    int horasSueno;


public:

    Animal(string nombre, string especie, string habitat, string alimentacion, string salud, int id, int edad, int juego, int horasSueno);
    string getNombre();
    string setNombre(string nombre);
    string getEspecie();
    string getHabitat();
    string getAlimentacion();
    string getSalud();
    string setSalud(string salud);
    int getId();
    int setId(int id);
    int getEdad();
    int setEdad(int edad);
    int getJuego();
    int setJuego(int juego);
    int getHorasSueno();
    int setHorasSueno();
    void jugar(Animal* pAnimal);
    void comer(Animal* animal, int);
    void dormir(Animal* pAnimal);

};


#endif //ZOOLOGICO_ANIMAL_H
