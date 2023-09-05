#include <iostream>
using namespace std;

class Bebida{
    public:
        Bebida(string, int);
        virtual void mostrar();
    protected:
        string sabor;
        int mililitros;
};

class Gaseosa:public Bebida{
    public:
        Gaseosa(string, int, float);
        void mostrar();
    protected:
        float calorias;
};

//.................................
Bebida::Bebida(string _sabor, int _mililitros){
    sabor = _sabor;
    mililitros = _mililitros;
}

void Bebida::mostrar(){
    cout << "Sabor: " << sabor << endl;
    cout << "Mililitros: " << mililitros << endl;
}

Gaseosa::Gaseosa(string _sabor, int _mililitros, float _calorias):Bebida(_sabor, _mililitros){
    calorias = _calorias;
}

void Gaseosa::mostrar(){
    Bebida::mostrar();
    cout << "Calorias: " << calorias << endl;
    cout << "+++++++++++++++++++++++++" << endl;
}

//............................

int main(){
    Bebida *ptr1 = new Gaseosa("Kiwi",100,76.56);
    Bebida *ptr2 = new Gaseosa("Fresa", 200, 13.99);
    ptr1->mostrar();
    ptr2->mostrar();
}