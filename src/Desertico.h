//
// Created by annek on 8/04/2023.
//

#ifndef ZOOLOGICO_DESERTICO_H
#define ZOOLOGICO_DESERTICO_H
#include "Habitat.h"

class Desertico: public Habitat{
public:
    Desertico(string humedad, string clima);
    void descripcion();

};



#endif //ZOOLOGICO_DESERTICO_H
