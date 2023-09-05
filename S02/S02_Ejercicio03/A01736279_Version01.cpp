#include <iostream>
using namespace std;

class cuenta{
    public:
        cuenta(int _saldo);
        void agrega(int _saldo);
        void retira(int _saldo);
        int obtenerSaldo();
    private:
        int saldo;
};

//............................

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

//..........................

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