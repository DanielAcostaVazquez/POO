#include <iostream>
using namespace std;

int main(){
    int x[5] = {5,4,3,2,1};
    for(int c = 0; c<5; c++){
        int *ptr = &x[c];
        cout << "La direccion asignada a x[" << c << "] es " << ptr << endl;
    }
    int *ptr1 = &x[0];
    int *ptr2 = &x[4];
    cout << "\nLa diferencia entre punteros es: " << (ptr1-ptr2) << endl;
    ptr1++;
    cout << "La diferencia entre direcciones es: " << *ptr1 << endl;
}