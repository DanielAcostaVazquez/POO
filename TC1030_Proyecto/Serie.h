#include <iostream>
#include "Video.h"
using namespace std;

class Serie: public Video{
    public:
        Serie(string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion, int _capitulos, int _temporadas);
        Serie(string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion, int _capitulos, int _temporadas);
        void muestraDatos();
        void addCapitulos(int _capitulos);
        void addTemporadas(int _temporadas);
    protected:
        int capitulos, temporadas;
};