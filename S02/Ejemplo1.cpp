#include <iostream>
using namespace std;

class Habitacion{
    public:
        double Area(double largo, double ancho){
            return largo*ancho;
        };
        double Volumen(double largo, double ancho, double alto){
            return largo*ancho*alto;
        };
};

int main(){
    Habitacion Sala;
    double l,w,h;

    cout << "Largo: ";
    cin >> l;

    cout << "Ancho: ";
    cin >> w;

    cout << "Alto: ";
    cin >> h;

    cout << "\n Area: " << Sala.Area(l, w) << endl;
    cout << "\n Volumen: " << Sala.Volumen(l, w, h) << endl;
}