#include <iostream>
using namespace std;

class Puntos{
    public:
        Puntos(int _x, int _y){
            x = _x;
            y = _y;
        }
        int x, y;

        Puntos operator + (Puntos &pts){
            Puntos new_punto(0,0);
            new_punto.x = this->x + pts.x;
            new_punto.y = this->y + pts.y;
            return new_punto;
        }
};

int main(){
    Puntos pts1(3,5);
    Puntos pts2(5,1);
    Puntos pts3(0,0);

    pts3 = pts1 + pts2;

    cout << "Coordenada x: " << pts3.x << endl;
    cout << "Coordenada y: " << pts3.y << endl;
}