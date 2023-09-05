#include <iostream>
#include "Cuenta.h"
using namespace std;

int main(){
    cuenta cuenta1(-500);
    cuenta cuenta2(1500);
    cout << "Saldo actual: "+to_string(cuenta1.obtenerSaldo()) << endl;
    cuenta1.agrega(1000);
    cout << "Saldo actual: "+to_string(cuenta1.obtenerSaldo()) << endl;
    cuenta1.retira(2000);
    cuenta1.retira(500);
    cout << "Saldo actual: "+to_string(cuenta1.obtenerSaldo()) << endl;

    cout << "Saldo actual: "+to_string(cuenta2.obtenerSaldo()) << endl;
    cuenta2.agrega(1000);
    cout << "Saldo actual: "+to_string(cuenta2.obtenerSaldo()) << endl;
    cuenta2.retira(2000);
    cuenta2.retira(500);
    cout << "Saldo actual: "+to_string(cuenta2.obtenerSaldo()) << endl;
}