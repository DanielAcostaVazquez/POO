#include <iostream>
using namespace std;

class Fecha{
    public:
        Fecha(int _dia, int _mes, int _year);
        void setDia(int _dia);
        void setMes(int _mes);
        void setYear(int _year);
        int getDia();
        int getMes();
        int getYear();
        void mostrarFecha();
    private:
        int dia, mes, year;
};

//..................

Fecha::Fecha(int _dia, int _mes, int _year){
    dia = _dia;
    if(_mes <= 12 && _mes >= 1){
    mes = _mes;
    }
    else{
        mes = 1;
        cout << "Mes invalido, estableciendo a Enero..." << endl;
    }
    year = _year;
}
void Fecha::setDia(int _dia){
    dia = _dia;
}
void Fecha::setMes(int _mes){
    if(_mes <= 12 && _mes >= 1){
    mes = _mes;
    }
    else{
        mes = 1;
        cout << "Mes invalido, estableciendo a Enero..." << endl;
    }
}
void Fecha::setYear(int _year){
    year = _year;
}
int Fecha::getDia(){
    return dia;
}
int Fecha::getMes(){
    return mes;
}
int Fecha::getYear(){
    return year;
}
void Fecha::mostrarFecha(){
    cout << "Fecha: "+to_string(dia)+"/"+to_string(mes)+"/"+to_string(year) << endl;
}

//...............

int main(){
    Fecha miFecha(13,17,2007);
    miFecha.mostrarFecha();
    miFecha.setDia(3);
    miFecha.setMes(-2);
    miFecha.setMes(4);
    miFecha.setYear(2003);
    miFecha.mostrarFecha();
}
