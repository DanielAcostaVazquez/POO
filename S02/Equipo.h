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