#include <iostream>
using namespace std;

int main(){
    try{
        throw 100;
        cout << "Dentro del try" << endl;
    }
    catch(int n){
        cout << "Error numero " << n << endl;
    }
}