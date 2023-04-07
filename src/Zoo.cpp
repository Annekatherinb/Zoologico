//
// Created by annek on 4/04/2023.
//
#include "Zoo.h"
#include "Habitat.h"


Zoo::Zoo(string nombre): nombre(nombre){}

void Zoo::recibirAnimal(string nombre, string especie, string habitat, string alimentacion, string salud, int id, int edad){
    Animales*pAnimalesTemp=new Animales(nombre,especie,habitat,alimentacion,salud,id,edad);
    this->mapaAnimales.insert(make_pair(id,pAnimalesTemp));
}

string Zoo::getNombre(){
    return this->nombre;
}

string Zoo::setNombre(string nombre){
    this->nombre=nombre;
}

void Zoo::mostrarAnimales() {
    unordered_map<int, Animales*>::iterator itmap;
    for(itmap = this->mapaAnimales.begin(); itmap != this->mapaAnimales.end();itmap++){
        int llave = itmap->first;
        Animales* Animales = itmap->second;
        cout<<"El animal con el id: "<< llave << " se llama: "<< Animales->getNombre()<<" y es un/una: "<< Animales->getEspecie()<<endl;
    }
}


void Zoo::agregarHabitad(string tipo){
    Habitat* pHabitadTemp = new Habitat(tipo);
    this->vector1.push_back(pHabitadTemp);
}

void Zoo::mostrar(){
    cout << "Habitad agregados:\n";
    std::vector<Habitat*>::iterator itVector;
    for (itVector = this->vector1.begin(); itVector != this->vector1.end(); ++itVector) {
        cout << (*itVector)->getTipo() << endl;
    }
}

void Zoo::animalHabitad(int id, string habitad){
    unordered_map<int, Animales*>::iterator itMap;
    if(mapaAnimales.count(id)>0) {
        for (itMap = this->mapaAnimales.begin(); itMap != this->mapaAnimales.end(); ++itMap) {
            if (id == itMap->first) {
                Animales *animal = itMap->second;
                cout << "El animal que selecciono es un/una: " << animal->getEspecie() << "\n";
                if (habitad == animal->getHabitat()) {
                    this->mapaHabitado.insert(make_pair(habitad, animal));
                    cout << "Se agrego correctamente a su habitat";
                } else {
                    cout << "Ese animal no puede ser agregado a ese habitad ya que pertenece al habitad: "
                         << animal->getHabitat();
                }
            }

        }
    }else{
        cout<<"Ese animal no se encuentra en el zoologico\n";
    }

}
