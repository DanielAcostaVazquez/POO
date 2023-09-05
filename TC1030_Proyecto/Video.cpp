#include <iostream>
#include "Video.h"
using namespace std;

Video::Video(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion){
    tipoVideo = _tipoVideo;
    nombreVideo = _nombreVideo;
    genero = _genero;
    calificacion = _calificacion;
    anioLanzamiento = _anioLanzamiento;
    duracion = _duracion;
}
Video::Video(string _tipoVideo, string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion){
    tipoVideo = _tipoVideo;
    nombreVideo = _nombreVideo;
    genero = _genero;
    calificacion = 0;
    anioLanzamiento = _anioLanzamiento;
    duracion = _duracion;
}
Video::Video(string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion){
    nombreVideo = _nombreVideo;
    genero = _genero;
    calificacion = _calificacion;
    anioLanzamiento = _anioLanzamiento;
    duracion = _duracion;
}
Video::Video(string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion){
    nombreVideo = _nombreVideo;
    genero = _genero;
    anioLanzamiento = _anioLanzamiento;
    duracion = _duracion;
}
string Video::getNombre(){
    return nombreVideo;
}
int Video::getCalificacion(){
    return calificacion;
}
void Video::calificaVideo(int _calificacion){
    calificacion = _calificacion;
    cout << "El video "+nombreVideo+" ha sido calificado como "+to_string(calificacion) << endl;
}
void Video::muestraDatos(){
    cout << "Tipo del Video: "+tipoVideo << endl;
    cout << "Nombre del Video: "+nombreVideo << endl;
    cout << "Genero del Video: "+genero << endl;
    cout << "Calificacion del Video: "+to_string(calificacion) << endl;
    cout << "Anio de lanzamiento: "+to_string(anioLanzamiento) << endl;
    cout << "Duracion del Video (en minutos): "+to_string(duracion) << endl;
}

//..............
Pelicula::Pelicula(string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion, string _director, string _productora, bool _tieneSecuela, bool _tienePrecuela, string _secuela, string _precuela, int _presupuesto, string _nominacion):Video(_nombreVideo, _genero, _calificacion, _anioLanzamiento, _duracion){
    tipoVideo = "Pelicula";
    director = _director;
    productora = _productora;
    nominacion = _nominacion;
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
Pelicula::Pelicula(string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion, string _director, string _productora, bool _tieneSecuela, bool _tienePrecuela, string _secuela, string _precuela, int _presupuesto, string _nominacion):Video(_nombreVideo, _genero, _anioLanzamiento, _duracion){
    tipoVideo = "Pelicula";
    calificacion = 0;
    director = _director;
    productora = _productora;
    nominacion = _nominacion;
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
    cout << "Nominada a: " << nominacion << endl;
}
void Pelicula::setPrecuela(string _precuela){
    tienePrecuela = true;
    precuela = _precuela;

}
void Pelicula::setSecuela(string _secuela){
    tieneSecuela = true;
    secuela = _secuela;
}

//...................

Serie::Serie(string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion, int _capitulos, int _temporadas):Video(_nombreVideo, _genero, _calificacion, _anioLanzamiento, _duracion){
    tipoVideo = "Serie";
    capitulos = _capitulos;
    temporadas= _temporadas;   
}
Serie::Serie(string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion, int _capitulos, int _temporadas):Video(_nombreVideo, _genero, _anioLanzamiento, _duracion){
    tipoVideo = "Serie";
    calificacion = 0;
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