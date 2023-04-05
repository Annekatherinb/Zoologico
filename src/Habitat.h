//
// Created by annek on 4/04/2023.
//

#ifndef ZOOLOGICO_HABITAT_H
#define ZOOLOGICO_HABITAT_H
#include "Animales.h"
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

class Habitat {
private:
    string tipo;
    std::vector<string> vectorHabitad;
    unordered_map<string ,Animales* > mapaHabitad;

public:
};


#endif //ZOOLOGICO_HABITAT_H
