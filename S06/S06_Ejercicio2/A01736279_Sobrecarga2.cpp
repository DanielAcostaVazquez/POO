#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

class Complejo{
    public:
        float a, b;
        Complejo(float _a, float _b){
            a = _a;
            b = _b;
        }
        Complejo operator + (Complejo com){
            Complejo resultado(0,0);
            resultado.a = a + com.a;
            resultado.b = b + com.b;
            return resultado;
        }
        Complejo operator - (Complejo com){
            Complejo resultado(0,0);
            resultado.a = a - com.a;
            resultado.b = b - com.b;
            return resultado;
        }
        Complejo operator * (Complejo com){
            Complejo resultado(0,0);
            resultado.a = (a*com.a) - (b*com.b);
            resultado.b = (a*com.b) + (b*com.a);
            return resultado;
        }
        Complejo operator / (Complejo com){
            Complejo resultado(0,0);
            resultado.a = ((a*com.a) + (b*com.b))/((pow(com.a,2))+(pow(b,2)));
            resultado.b = (((a*-1)*com.b) + (b*com.a))/((pow(com.a,2)) + (pow(b,2)));
            return resultado;
        }
        Complejo operator % (float k){
            Complejo resultado(0,0);
            resultado.a = a*k;
            resultado.b = b*k;
            return resultado;
        }
};

int main(){
    Complejo x(2,3);
    Complejo y(4,7);
    Complejo resultado(0,0);
    resultado = x+y;
    cout << "Suma: Real: " << resultado.a << " Imaginario: " << resultado.b << endl;
    resultado = x-y;
    cout << "Resta: Real: " << resultado.a << " Imaginario: " << resultado.b << endl;
    resultado = x*y;
    cout << "Multiplicacion: Real: " << resultado.a << " Imaginario: " << resultado.b << endl;
    resultado = x/y;
    cout << "Division: Real: " << resultado.a << " Imaginario: " << resultado.b << endl;
    resultado = x%3;
    cout << "Multiplicacion escalar (3 con x): Real: " << resultado.a << " Imaginario: " << resultado.b << endl;
}