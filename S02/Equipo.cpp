#include <iostream>
#include "Equipo.h"
using namespace std;

Equipo::Equipo(string _nombre){
    nombre = _nombre;
}
string Equipo::getNombre(){
    return nombre;
}
void Equipo::setNombre(string _nombre){
    nombre = _nombre;
}