#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

class Circulo{
    public:
        Circulo(double _radio);
        void setradio(double _radio);
        double getradio();
        void pideradio();
        double circ_Area();
        double circ_Perimetro();
    private:
        double radio;

};

//..............
Circulo::Circulo(double _radio){
            radio = _radio;
        }
void Circulo::setradio(double _radio){
            radio = _radio;
        }
double Circulo::getradio(){
            return radio;
        }
void Circulo::pideradio(){
            cout << "Cual es el radio del circulo: " << endl;
            cin >> radio;
        }
double Circulo::circ_Area(){
            double area = M_PI*(pow(radio,2));
            return area;
        }
double Circulo::circ_Perimetro(){
            double peri = 2*M_PI*radio;
            return peri;
        }
//..............

int main(){
    Circulo c1(6);
    Circulo c2(2);
    cout << c1.circ_Perimetro() << endl;
    cout << c1.circ_Area() << endl;
    c2.pideradio();
    cout << c2.circ_Perimetro() << endl;
    cout << c2.circ_Area() << endl;
}