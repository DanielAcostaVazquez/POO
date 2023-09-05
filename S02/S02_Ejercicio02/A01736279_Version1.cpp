#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

class Circulo{
    public:
        Circulo(double _radio){
            radio = _radio;
        }
        void setradio(double _radio){
            radio = _radio;
        }
        double getradio(){
            return radio;
        }
        void pideradio(){
            cout << "Cual es el radio del circulo: " << endl;
            cin >> radio;
        }
        double circ_Area(){
            double area = M_PI*(pow(radio,2));
            return area;
        }
        double circ_Perimetro(){
            double peri = 2*M_PI*radio;
            return peri;
        }
    private:
        double radio;

};

int main(){
    Circulo c1(6);
    Circulo c2(2);
    cout << c1.circ_Perimetro() << endl;
    cout << c1.circ_Area() << endl;
    c2.pideradio();
    cout << c2.circ_Perimetro() << endl;
    cout << c2.circ_Area() << endl;
}