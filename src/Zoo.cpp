//
// Created by annek on 4/04/2023.
//
#include "Zoo.h"
#include "Habitat.h"


Zoo::Zoo(string nombre): nombre(nombre){}

void Zoo::recibirAnimal(string nombre, string especie, string habitat, string alimentacion, string salud, int id, int edad, int horasSueno){
    Animales*pAnimalesTemp=new Animales(nombre,especie,habitat,alimentacion,salud,id,edad, 0, horasSueno);
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
    cout << "Habitats agregados:\n";
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
                    mapaHabitado[habitad].push_back(animal);
                    cout << "Se agrego correctamente a su habitat";
                } else {
                    cout << "Ese animal no puede ser agregado a ese habitad ya que pertenece al habitad: "
                         << animal->getHabitat();
                    if(habitad != "polar" || habitad != "desertico" || habitad != "acuatico" ||habitad != "selvatico"){
                        cout<<" ademas ese habitad no existe\n";
                    }
                }
            }

        }
    }else{
        cout<<"Ese animal no se encuentra en el zoologico\n";
    }

}
void Zoo::mostrarAnimalHabitat() {
    unordered_map<string , Animales*>::iterator it;
    for (const auto& it : mapaHabitado) {
        // Acceder a la clave
        string clave = it.first;
        cout<< "Habitad: "<<clave<<"\n";
        // Acceder al vector asociado a la clave
        std::vector<Animales*> vectorDeAnimales = it.second;
        cout<<"\n";
        // Recorrer el vector de animales y acceder a los objetos
        for (const auto& animal : vectorDeAnimales) {
           cout<< "su nombre es: "<<animal->getNombre()<<" es un/una: "<<animal->getEspecie()<<" tiene: "<<animal->getEdad()<<" anios"
           <<" es: "<< animal->getAlimentacion()<< " y esta: "<< animal->getSalud()<<"\n";// Ejemplo de acceso a un método del objeto
        }
    }
}

bool Zoo::buscar(int id){
    unordered_map<int, Animales*>::iterator itMap;
    if(mapaAnimales.count(id)>0) {
        return true;
    }else{
        return false;
    }
}

void Zoo::mapaAlimeto() {
    mapaAlimentos={{"carnivoro", "carne"},{"herbivoro", "plantas"},{"omnivoro","carne y pplantas"}};

    for (auto elemento : mapaAlimentos) {
        cout << "Animal: " << elemento.first << ", Dieta: " << elemento.second << endl;
    }

}

void Zoo::acciones(int op) {
    unordered_map<int, Animales*>::iterator itMap;
    Animales* pTemp;
    int idJugar;
    cout<<"Ingrese el id del animal que desea que realize la accion:\n";
    std::cin>>idJugar;
    if(mapaAnimales.count(idJugar)>0) {
        if (op == 1) {
            for (itMap = this->mapaAnimales.begin(); itMap != this->mapaAnimales.end(); ++itMap) {
                if (idJugar == itMap->first) {
                    Animales *pAnimal = itMap->second;
                    pTemp->jugar(pAnimal);
                }
            }
        } else if (op == 2) {
            for (itMap = this->mapaAnimales.begin(); itMap != this->mapaAnimales.end(); ++itMap) {
                if (idJugar == itMap->first) {
                    Animales *pAnimal = itMap->second;
                    pTemp->dormir(pAnimal);
                }
            }
        } else {
            cout << "Esa opcion no existe";
        }
    }else{
        cout<<"Ese animal no se encuentra en este zoologico\n";
    }
}