#include <iostream>
using namespace std;

class Vehiculo{
    public:
        string marca = "BMW";
        void enciende(){
            cout << "El Vehiculo ha encendido..." << endl;
        }
};

class Auto:public Vehiculo{
    public:
        int ruedas = 4;
};

int main(){
    Auto MiCarro;
    MiCarro.enciende();
}