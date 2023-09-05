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