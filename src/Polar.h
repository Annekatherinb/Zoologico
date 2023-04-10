//
// Created by annek on 8/04/2023.
//

#ifndef ZOOLOGICO_POLAR_H
#define ZOOLOGICO_POLAR_H
#include "Habitat.h"

class Polar: public Habitat{

public:
    Polar(string humedad, string clima);
    void descripcion();


};


#endif //ZOOLOGICO_POLAR_H
