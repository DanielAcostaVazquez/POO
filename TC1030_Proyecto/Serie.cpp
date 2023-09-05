#include <iostream>
#include "Serie.h"
using namespace std;

Serie::Serie(string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion, int _capitulos, int _temporadas):Video(_nombreVideo, _genero, _calificacion, _anioLanzamiento, _duracion){
    tipoVideo = "Serie";
    capitulos = _capitulos;
    temporadas= _temporadas;   
}
Serie::Serie(string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion, int _capitulos, int _temporadas):Video(_nombreVideo, _genero, _anioLanzamiento, _duracion){
    tipoVideo = "Serie";
    capitulos = _capitulos;
    temporadas= _temporadas;   
}
void Serie::muestraDatos(){
    Video::muestraDatos();
    cout << "Numero de capitulos totales: " << capitulos << endl;
    cout << "Numero de temporadas: " << temporadas << endl;
}
void Serie::addCapitulos(int _capitulos){
    capitulos += _capitulos;
}
void Serie::addTemporadas(int _temporadas){
    temporadas += _temporadas;
}