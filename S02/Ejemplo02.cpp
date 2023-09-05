#include <iostream>
using namespace std;

class Equipo{
    public:
        void setNombre(string _nombre){  //setter
            nombre = _nombre;
        }
        string getNombre(){ //getter
            return nombre;
        }
    private:
        string nombre;

};

int main(){
    Equipo miEquipo;
    miEquipo.setNombre("SF 49ers");
    cout << miEquipo.getNombre() << endl;

}