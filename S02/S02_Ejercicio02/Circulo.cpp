#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <cmath>
#include "Circulo.h"
using namespace std;

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