#include <iostream>
using namespace std;

int main(){
    int n, mayor;
    cout << "Numero de elementos del array?" << endl;
    cin >> n;
    int a[n], *ptr;
    cout << "Escribe los numeros del array:" << endl;
    for(int c = 0;c<n;c++){
        cin >> a[c];
    }
    ptr = &mayor;
    for(int c = 0;c<n;c++){
        if(*ptr < a[c]){
            mayor = a[c];
        }
    }
    cout << "El numero mayor es " << *ptr << " y esta localizado en: " << ptr << endl;
}