#include <iostream>
using namespace std;

class Mamifero{
    public:
        virtual void mover();
        virtual void sonido();
};

void Mamifero::mover(){
    cout << "El mamifero se esta moviendo" << endl;
}

void Mamifero::sonido(){
    cout << "El mamifero hace un ruido" << endl;
}

//.......................................

class Perro:public Mamifero{
    public:
        void mover();
        void sonido();
};

void Perro::mover(){
    cout << "El perro se esta moviendo" << endl;
}

void Perro::sonido(){
    cout << "El perro hace woof woof" << endl;
}

//.............................................

int main(){
    Mamifero *ptrP = new Perro;
    ptrP->mover();
    ptrP->sonido();
};