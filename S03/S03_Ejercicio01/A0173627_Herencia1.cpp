#include <iostream>
using namespace std;

class Persona{
    public:
        Persona(string _nombre, int _edad){
            nombre = _nombre;
            edad = _edad;
        }
        void cargar(){
            cout << "Que edad tiene esta persona?" << endl;
            cin >> edad;
            cout << "Cual es el nombre de esta persona?" << endl;
            cin >> nombre;
        }
        void imprime(){
            cout << nombre+" tiene "+to_string(edad)+" años de edad" << endl;
        }
    protected:
        string nombre;
        int edad;
};

class Empleado:public Persona{
    public:
        Empleado(string _nombre, int _edad, int _saldo):Persona(_nombre, _edad){
            saldo = _saldo;
        }
        void cargarSaldo(){
            cout << "Cuanto sueldo tiene "+nombre+"?" << endl;
            cin >> saldo;
        }
        void imprimeSaldo(){
            cout << nombre+" tiene un sueldo de "+to_string(saldo) << endl;
        }
    private:
        int saldo;

};

int main(){
    Persona p1("Pepe",18);
    Empleado p2("Eduardo",23,2500);
    p1.cargar();
    p1.imprime();
    p2.cargar();
    p2.imprime();
    p2.cargarSaldo();
    p2.imprimeSaldo();

}