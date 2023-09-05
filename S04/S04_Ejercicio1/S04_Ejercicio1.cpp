#include <iostream>
using namespace std;

int main(){
    int a, b, *ptra, *ptrb;
    cout << "Que valor tiene la variable a?" << endl;
    cin >> a;
    cout << "Que valor tiene la variable b?" << endl;
    cin >> b;
    ptra = &a;
    ptrb = &b;

    cout << "El valor de ptra es de "+to_string(*ptra)+" y esta en la ubicacion "<< ptra << endl;
    cout << "El valor de ptra es de "+to_string(*ptrb)+" y esta en la ubicacion "<< ptrb << endl;


}