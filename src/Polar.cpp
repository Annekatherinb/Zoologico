//
// Created by annek on 8/04/2023.
//

#include "Polar.h"

Polar::Polar(string humedad, string clima): Habitat(humedad, clima){}

void Polar::descripcion() {
    cout<<"El habitad tiene las siguientes caracteristicas humedad: "<< humedad << " y clima" << clima<< std::endl;
}