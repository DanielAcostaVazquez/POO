#include <iostream>
using namespace std;

int main(){
    int arr[10];
    for(int c = 1; c <= 10; c++){
        arr[c-1] = c;
    }
    try{
        for(int c = 0; c <= 11; c++){
            if(c >= 10){
                throw (c + 1);
            }
            cout << arr[c] << endl;
        }
    }
    catch(int n){
        cout << "Elemento " << n << " no existente" << endl;
    }
}