//
// Created by annek on 8/04/2023.
//

#include "Desertico.h"
Desertico::Desertico(string humedad, string clima): Habitat(humedad, clima){}
void Desertico::descripcion() {
    cout<<"El habitad tiene las siguientes caracteristicas humedad: "<< humedad << " y clima" << clima<< std::endl;
}