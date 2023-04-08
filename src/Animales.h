//
// Created by annek on 4/04/2023.
//

#ifndef ZOOLOGICO_ANIMALES_H
#define ZOOLOGICO_ANIMALES_H
#include <string>
#include <iostream>
#include <stdlib.h>
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


class Animales {
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

    Animales(string nombre, string especie, string habitat, string alimentacion, string salud, int id, int edad, int juego, int horasSueno);
    string getNombre();
    string setNombre(string nombre);
    string getEspecie();
    string setEspecie(string especie);
    string getHabitat();
    string setHabitat(string habitat);
    string getAlimentacion();
    string setAlimentacion(string alimentacion);
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
    void jugar(Animales* pAnimal);
    void comer(int id);
    void dormir(Animales* pAnimal);

};


#endif //ZOOLOGICO_ANIMALES_H
