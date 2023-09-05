#include <iostream>
using namespace std;

class Video{
    public:
        Video(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion);
        Video(string _tipoVideo, string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion);
        Video(string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion);
        Video(string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion);
        string getNombre();
        int getCalificacion();
        void calificaVideo(int _calificacion);
        void virtual muestraDatos();
    protected:
    string tipoVideo, nombreVideo, genero;
    int calificacion, anioLanzamiento, duracion;
};

//..........................
class Pelicula: public Video{
    public:
        Pelicula(string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion, string _director, string _productora, bool _tieneSecuela, bool _tienePrecuela, string _secuela, string _precuela, int _presupuesto, string _nominacion);
        Pelicula(string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion, string _director, string _productora, bool _tieneSecuela, bool _tienePrecuela, string _secuela, string _precuela, int _presupuesto, string _nominacion);
        void muestraDatos();
        void setPrecuela(string _precuela);
        void setSecuela(string _secuela);
    protected:
        string director, productora, secuela, precuela;
        string nominacion;
        int presupuesto;
        bool tieneSecuela, tienePrecuela;
};

//.....................
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