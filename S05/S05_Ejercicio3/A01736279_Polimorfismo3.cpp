#include <iostream>
using namespace std;

class Transporte{
    public:
        Transporte(string _marca, int _pasajeros){
            marca = _marca;
            pasajeros = _pasajeros;
        }
        void virtual modelo(){
            cout << "La marca del vehiculo es: " << marca << endl;
            cout << "Transporta hasta " << pasajeros << " pasajeros." << endl;
        }
    protected:
        string marca;
        int pasajeros;
};

class Moto:public Transporte{
    public:
        Moto(string _marca, int _pasajeros, int _precio):Transporte(_marca, _pasajeros){
            precio = _precio;
        }
        void modelo(){
            Transporte::modelo();
            cout << "El precio de la moto es: " << precio << endl;
            cout << "----------------------------" << endl;
        }
    protected:
        int precio;
};

class Camion:public Transporte{
    public:
        Camion(string _marca, int _pasajeros, int _tonCarga):Transporte(_marca, _pasajeros){
            tonCarga = _tonCarga;
        }
        void modelo(){
            Transporte::modelo();
            cout << "El camion puede trasnportar hasta " << tonCarga << " toneladas." << endl;
            cout << "----------------------------" << endl;
        }
    protected:
        int tonCarga;
};

int main(){
    Transporte *p[3] = {new Moto("Honda",2,35000), new Camion("Isuzu",3,1), new Transporte("BMW",4)};
    for(int c = 0; c < 3; c++){
        p[c]->modelo();
    }
}