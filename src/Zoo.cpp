//
// Created by annek on 4/04/2023.
//
#include "Zoo.h"
#include "Habitat.h"


Zoo::Zoo(string nombre): nombre(nombre){}

void Zoo::recibirAnimal(string nombre, string especie, string habitat, string alimentacion, string salud, int id, int edad, int horasSueno){
    Animal*pAnimalesTemp=new Animal(nombre, especie, habitat, alimentacion, salud, id, edad, 0, horasSueno);
    this->mapaAnimales.insert(make_pair(id,pAnimalesTemp));
}

string Zoo::getNombre(){
    return this->nombre;
}

string Zoo::setNombre(string nombre){
    this->nombre=nombre;
}

void Zoo::mostrarAnimales() {
    unordered_map<int, Animal*>::iterator itmap;
    for(itmap = this->mapaAnimales.begin(); itmap != this->mapaAnimales.end();itmap++){
        int llave = itmap->first;
        Animal* Animales = itmap->second;
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

    unordered_map<int, Animal*>::iterator itMap;
    if(habitad == "polar" || habitad == "desertico" || habitad == "acuatico" || habitad == "selvatico") {
        if (mapaAnimales.count(id) > 0) {
            for (itMap = this->mapaAnimales.begin(); itMap != this->mapaAnimales.end(); ++itMap) {
                if (id == itMap->first) {
                    Animal *animal = itMap->second;
                    cout << "El animal que selecciono es un/una: " << animal->getEspecie() << "\n";
                    if (habitad == animal->getHabitat()) {
                        mapaHabitado[habitad].push_back(animal);
                        cout << "Se agrego correctamente a su habitat";
                    } else {
                        cout << "Ese animal no puede ser agregado a ese habitad ya que pertenece al habitad: "
                             << animal->getHabitat();
                    }
                }
            }
        }else {
            cout << "Ese animal no se encuentra en el zoologico\n";
        }
    }else{
        cout<<"ese habitad no existe\n";
    }
}

void Zoo::mostrarAnimalHabitat() {
    unordered_map<string , Animal*>::iterator it;
    for (const auto& it : mapaHabitado) {
        // Acceder a la clave
        string clave = it.first;
        cout<< "Habitad: "<<clave<<"\n";
        // Acceder al vector asociado a la clave
        std::vector<Animal*> vectorDeAnimales = it.second;
        cout<<"\n";
        // Recorrer el vector de animales y acceder a los objetos
        for (const auto& animal : vectorDeAnimales) {
           cout<< "su nombre es: "<<animal->getNombre()<<" es un/una: "<<animal->getEspecie()<<" tiene: "<<animal->getEdad()<<" anios"
           <<" es: "<< animal->getAlimentacion()<< " y esta: "<< animal->getSalud()<<"\n";// Ejemplo de acceso a un método del objeto
        }
    }
}

bool Zoo::buscar(int id){
    unordered_map<int, Animal*>::iterator itMap;
    if(mapaAnimales.count(id)>0) {
        return true;
    }else{
        return false;
    }
}

void Zoo::recibirAlimento(string tipoAnimal) {
    string alimento;
    std::vector<string> comida;
    cout<<"Digite el alimento deseado o 'no' para no digitar mas.\n";
    do{
        std::cin>>alimento;
        if(alimento!="no"){
            comida.push_back(alimento);
        }
    }while(alimento!="no");
    alimentos.insert(make_pair(tipoAnimal, comida));
}

void Zoo::imprimirAlimentos(string tipoAnimal){
    for (auto const &valor: alimentos[tipoAnimal]) {
        cout << "los alimentos de este animal son: " << valor << ", \n";
    }
}
int Zoo::contadorAlimentos(string tipoAnimal){
    int cont;
    for (auto const &valor: alimentos[tipoAnimal]) {
        cont++;
    }
    return cont;
}

void Zoo::acciones(int op) {
    unordered_map<int, Animal*>::iterator itMap;
    Animal* pTemp;
    int idAccion;
    cout<<"Ingrese el id del animal que desea que realize la accion:\n";
    std::cin>>idAccion;
    if(mapaAnimales.count(idAccion)>0) {
        for (itMap = this->mapaAnimales.begin(); itMap != this->mapaAnimales.end(); ++itMap) {
            if (idAccion == itMap->first){
                if (op == 1) {
                    Animal *pAnimal1 = itMap->second;
                    pTemp->jugar(pAnimal1);
                }
                else if(op == 2){
                    Animal *pAnimal2 = itMap->second;
                    pTemp->dormir(pAnimal2);
                }
                else if(op == 3){
                    Animal *pAnimal = itMap->second;
                    int cant;
                    imprimirAlimentos(pAnimal->getAlimentacion());
                    cant = contadorAlimentos(pAnimal->getAlimentacion());
                    pTemp->comer(pAnimal, cant);
                }else{
                    cout<<"Esa opcion no existe\n";
                }
            }
        }
    }else {
        cout << "Ese animal no esta en este zoologico\n";
    }
}

