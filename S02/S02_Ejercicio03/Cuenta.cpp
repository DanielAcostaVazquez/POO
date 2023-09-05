#include <iostream>
#include "Cuenta.h"
using namespace std;


cuenta::cuenta(int _saldo){
    if(_saldo >= 0){
        saldo = _saldo;
    }
    else{
        saldo = 0;
        cout << "Saldo invalido. Estableciendo Saldo en 0" << endl;
    };
}
void cuenta::agrega(int _saldo){
    saldo += _saldo;
    cout << "Se agrego "+to_string(_saldo)+" a la cuenta" << endl; 
}
void cuenta::retira(int _saldo){
    if(_saldo > saldo){
        cout << " Error. Se intenta retirar una cantidad mayor  ue el saldo actual." << endl;
    }
    else{
        saldo -= _saldo;
    }
}
int cuenta::obtenerSaldo(){
    return saldo;
}