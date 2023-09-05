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