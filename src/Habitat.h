//
// Created by annek on 4/04/2023.
//

#ifndef ZOOLOGICO_HABITAT_H
#define ZOOLOGICO_HABITAT_H
#include "Animal.h"
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

class Habitat{

private:
    string tipo;
protected:
    string clima;
    string humedad;


public:

    Habitat(string tipo);
    Habitat(string humedad, string clima);

    string getTipo();
    string setTipo(string tipo);
    void caracteristicas();
    void mostrarCaracteristicas();

};


#endif //ZOOLOGICO_HABITAT_H
