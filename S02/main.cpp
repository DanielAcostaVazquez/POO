#include <iostream>
#include "Equipo.h"
using namespace std;

int main(){
    Equipo miEquipo("NY Giants");
    miEquipo.setNombre("SF 49ers");
    cout << miEquipo.getNombre() << endl;

}