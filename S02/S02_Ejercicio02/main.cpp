#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <cmath>
#include "Circulo.h"
using namespace std;

int main(){
    Circulo c1(6);
    Circulo c2(2);
    cout << c1.circ_Perimetro() << endl;
    cout << c1.circ_Area() << endl;
    c2.pideradio();
    cout << c2.circ_Perimetro() << endl;
    cout << c2.circ_Area() << endl;
}