#include <iostream>
using namespace std;

class Puntos{
    public:
        Puntos(int _x, int _y){
            x = _x;
            y = _y;
        }
        int x, y;

        bool operator == (Puntos &pts){
            if((this->x == pts.x) && (this->y == pts.y)){
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){
    Puntos pts1(3,5);
    Puntos pts2(5,1);
    Puntos pts3(3,5);
    if(pts1 == pts2){
        cout << "Son iguales" << endl;
    }
    else{
        cout << "Son diferentes" << endl;
    }

    if(pts1 == pts3){
        cout << "Son iguales" << endl;
    }
    else{
        cout << "Son diferentes" << endl;
    }
}