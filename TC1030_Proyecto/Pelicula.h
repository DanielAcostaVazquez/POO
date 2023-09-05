#include <iostream>
#include "Video.h"
using namespace std;

class Pelicula: public Video{
    public:
        Pelicula(string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion, string _director, string _productora, bool _tieneSecuela, bool _tienePrecuela, string _secuela, string _precuela, int _presupuesto);
        Pelicula(string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion, string _director, string _productora, bool _tieneSecuela, bool _tienePrecuela, string _secuela, string _precuela, int _presupuesto);
        void muestraDatos();
        void setPrecuela(string _precuela);
        void setSecuela(string _secuela);
    protected:
        string director, productora, secuela, precuela;
        int presupuesto;
        bool tieneSecuela, tienePrecuela;
};