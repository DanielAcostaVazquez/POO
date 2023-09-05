#include <iostream>
using namespace std;

class Equipo{
    public:
        Equipo(string _nombre);
        string getNombre();
        void setNombre(string _nombre);
    private:
        string nombre;

};

//...................................

Equipo::Equipo(string _nombre){
    nombre = _nombre;
}
string Equipo::getNombre(){
    return nombre;
}
void Equipo::setNombre(string _nombre){
    nombre = _nombre;
}

//...................................

int main(){
    Equipo miEquipo("NY Giants");
    miEquipo.setNombre("SF 49ers");
    cout << miEquipo.getNombre() << endl;

}