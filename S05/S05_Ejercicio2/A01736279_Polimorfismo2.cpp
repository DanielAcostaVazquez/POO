#include <iostream>
using namespace std;

class Figura{
    public:
        void obtener(float _alto, float _largo){
            alto = _alto;
            largo = _largo;
        }
        float virtual area(){
            return 0;
        }
    protected:
        float largo, alto;
};

class Rectangulo:public Figura{
    public:
        float area(){
            float r = alto*largo;
            return r;
        }
};

class Triangulo:public Figura{
    public:
        float area(){
            float r = (alto*largo)/2;
            return r;
        }
};

int main(){
    Figura *Rect01 = new Rectangulo();
    Figura *Triangulo01 = new Triangulo();
    Rect01->obtener(4,5);
    Triangulo01->obtener(4,5);

    cout << Rect01->area() << " <- Area del Rectangulo" << endl;
    cout << Triangulo01->area() << " <- Area del Triangulo" << endl;
}
