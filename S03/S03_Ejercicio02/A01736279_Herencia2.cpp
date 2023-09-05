#include <iostream>
using namespace std;

class Auto{
    public:
        Auto(string _serie, string _marca, int _year, int _precio){
            serie = _serie;
            marca = _marca;
            year = _year;
            precio = _precio;
        }
        void Imprimir(){
            cout << "El vehiculo es de la marca: "+marca+" y la serie es "+serie+" del año "+to_string(year)+" y tiene un precio de "+to_string(precio) << endl;
        }
    protected:
        string serie,marca;
        int year, precio;
};

class Vagoneta:public Auto{
    public:
        Vagoneta(string _serie, string _marca, int _year, int _precio, int _pasajeros):Auto(_serie, _marca,_year, _precio){
            pasajeros = _pasajeros;
        }
        void Imprimir(){
            Auto::Imprimir();
            cout << "Este vehiculo tiene un numero maximo de pasajeros de "+to_string(pasajeros) << endl;
        }
    protected:
        int pasajeros;
};

class Lujo: public Vagoneta{
    public:
        Lujo(string _serie, string _marca, int _year, int _precio, int _pasajeros, bool _hibrido):Vagoneta(_serie, _marca, _year, _precio, _pasajeros){
            hibrido = _hibrido;
        }
        void Imprimir(){
            Vagoneta::Imprimir();
            if(hibrido==true){
                cout << "Este vehiculo es un auto de lujo y SI es hibrido" << endl;
            }
            else{
                cout << "Este vehiculo es un auto de lujo y NO es hibrido" << endl;
            }
            
        }
    protected:
        bool hibrido;
};

class Camioneta:public Auto{
    public:
        Camioneta(string _serie, string _marca, int _year, int _precio, int _capacidad, int _ejes):Auto(_serie, _marca, _year, _precio){
            capacidad = _capacidad;
            ejes = _ejes;
        }
        void Imprimir(){
            Auto::Imprimir();
            cout << "Esta Camioneta tiene una capacidad de carga de "+to_string(capacidad)+" kg y tiene "+to_string(ejes)+" ejes." << endl;
        }
    protected:
        int capacidad, ejes;
};

int main(){
    Vagoneta AutoCompacto("MHI43", "Ford", 2005, 20000,5);
    Vagoneta Vago("KT67", "Nissan", 2013, 10000, 4);
    Lujo AutoLujo("X3", "BMW", 2022, 1230000, 5, true);
    Lujo AutoLujo2("MLA", "Mercedes", 2022, 1500000, 7, false);
    Camioneta camioneta("GT500", "Chevrolet", 2015, 200000, 700, 6);
    AutoCompacto.Imprimir();
    Vago.Imprimir();
    AutoLujo.Imprimir();
    AutoLujo2.Imprimir();
    camioneta.Imprimir();
    
}