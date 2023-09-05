#include <iostream>
#include "Pelicula.h"
using namespace std;

Pelicula::Pelicula(string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion, string _director, string _productora, bool _tieneSecuela, bool _tienePrecuela, string _secuela, string _precuela, int _presupuesto):Video(_nombreVideo, _genero, _calificacion, _anioLanzamiento, _duracion){
    tipoVideo = "Pelicula";
    director = _director;
    productora = _productora;
    if(_tienePrecuela==false){
        precuela = "NINGUNA";
    }
    else{
        precuela = _precuela;
    }
    if(_tieneSecuela==false){
        secuela = "NINGUNA";
    }
    else{
        secuela = _secuela;
    }
    presupuesto = _presupuesto;
};
Pelicula::Pelicula(string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion, string _director, string _productora, bool _tieneSecuela, bool _tienePrecuela, string _secuela, string _precuela, int _presupuesto):Video(_nombreVideo, _genero, _anioLanzamiento, _duracion){
    tipoVideo = "Pelicula";
    director = _director;
    productora = _productora;
    if(_tienePrecuela==false){
        precuela = "NINGUNA";
    }
    else{
        precuela = _precuela;
    }
    if(_tieneSecuela==false){
        secuela = "NINGUNA";
    }
    else{
        secuela = _secuela;
    }
    presupuesto = _presupuesto;
};
void Pelicula::muestraDatos(){
    Video::muestraDatos();
    cout << "Director: " << director << endl;
    cout << "Productora: " << productora << endl;
    cout << "Precuela: " << precuela << endl;
    cout << "Secuela: " << secuela << endl;
    cout << "Presupuesto (en millones de dolares): " << presupuesto << endl;
}
void Pelicula::setPrecuela(string _precuela){
    tienePrecuela = true;
    precuela = _precuela;

}
void Pelicula::setSecuela(string _secuela){
    tieneSecuela = true;
    secuela = _secuela;
}
