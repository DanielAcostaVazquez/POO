#include <iostream>
using namespace std;

class Fraccion{
    public:
        Fraccion(int, int);
        int numerador, denominador;

        Fraccion operator - (Fraccion frac){
            Fraccion resultado(1,1);
            if(denominador==frac.denominador){
                resultado.numerador = numerador - frac.numerador;
            }
            else{
                resultado.numerador = (numerador*frac.denominador) - (frac.numerador*denominador);
                resultado.denominador = denominador*frac.denominador;
            }
            return resultado;
        }
};

Fraccion::Fraccion(int _numerador, int _denominador){
    numerador = _numerador;
    denominador = _denominador;
}

int main(){
    Fraccion frac1(1,2);
    Fraccion frac2(1,4);
    Fraccion new_fracc(1,1);

    new_fracc = frac1 - frac2;

    cout << "Numerador final: " << new_fracc.numerador << endl;
    cout << "Denominador final: " << new_fracc.denominador << endl;
    cout << "Fraccion Final: " << new_fracc.numerador << "/" << new_fracc.denominador << endl; 
}