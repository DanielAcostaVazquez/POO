#include <iostream>
using namespace std;

class Libro{
    public:
        Libro(string _Titulo, int _Paginas, string _Codigo);
        string getTitulo();
        int getPaginas();
        string getCodigo();
        void setTitulo(string _Titulo);
        void setPaginas(int _Paginas);
        void setCodigo(string _Codigo);
        void imprimeTitulo();
        void imprimePaginas();
        void imprimeCodigo();
    private:
        string Titulo;
        string Codigo;
        int Paginas;

};

//........

Libro::Libro(string _Titulo, int _Paginas, string _Codigo){
    Titulo =_Titulo;
    Paginas =_Paginas;
    Codigo =_Codigo;
}
string Libro::getTitulo(){
    return Titulo;
}
int Libro::getPaginas(){
    return Paginas;
}
string Libro::getCodigo(){
    return Codigo;
}
void Libro::setTitulo(string _Titulo){
    Titulo = _Titulo;
}
void Libro::setCodigo(string _Codigo){
    Codigo = _Codigo;
}
void Libro::setPaginas(int _Paginas){
    Paginas = _Paginas;
}
void Libro::imprimeTitulo(){
    cout << getTitulo() << endl;
}
void Libro::imprimeCodigo(){
    cout << getCodigo() << endl;
}
void Libro::imprimePaginas(){
    cout << getPaginas() << endl;
}

//............

int main(){
    Libro libro1("La Bella y la Bestia", 342, "SOC321");
    Libro libro2("El Arte de la Guerra", 567, "HIS520");
    libro1.imprimeTitulo();
    libro1.imprimePaginas();
    libro1.imprimeCodigo();
    libro2.imprimeTitulo();
    libro2.imprimePaginas();
    libro2.imprimeCodigo();

}