#include <iostream>
using namespace std;

class Hora{
    public:
        int h, m, s;
        Hora(int _h, int _m, int _s){
            h = _h;
            m = _m;
            s = _s;
        }

        Hora operator + (Hora &hr){
            this->h = this->h + hr.h;
            this->m = this->m + hr.m;
            if((this->m)>=60){
                this->h = this->h + 1;
                this->m = this->m - 60;
            }
            this->s = this->s + hr.s;
            if((this->s)>=60){
                this->m = this->m + 1;
                this->s = this->s - 60;
            }
            return *this;
        }

        virtual void bienvenida(){
            cout << "Bienvenido al reloj principal" << endl;
        }
        
};

//.......................

class Relojito:public Hora{
    public:
        int d;
        Relojito(int _d, int _h, int _m, int _s):Hora(_h, _m, _s){
            d = _d;
        }
        void bienvenida(){
            Hora::bienvenida();
            cout << "Bienvenido al relojito" << endl;
        }
};

//..............

int main(){
    Hora hora1(12,50, 25);
    Hora agregar(1, 20, 55);
    Hora Nueva(0, 0, 0);
    Nueva = hora1 + agregar;
    Relojito *MiReloj = new Relojito(10,19, 12, 22);
    cout << "Despues de sumar la salida es: " << Nueva.h << " horas, " << Nueva.m << " minutos y " << Nueva.s << " segundos." << endl;
    MiReloj->bienvenida();
    cout << "Dia " << MiReloj->d << endl;
}