#include <iostream>
#include <vector>
#include "Video.h"
using namespace std;

int main(){
    Video *video1 = new Pelicula("Shrek 2", "Comedia", 2004, 93, "Andrew Adamson", "DreamWorks", true, true, "Shrek 3", "Shrek", 150, "Mejor Pelicula Animada 2005");
    Video *video2 = new Pelicula("Lord of the Rings: The Fellowship of the Ring", "Fantasia", 2001, 178, "Peter Jackson", "New Line Cinema", true, false, "Lord of the Rings: The Two Towers", "platanito chow", 93, "Mejor Pelicula de Fantasia 2002");
    Video *video3 = new Serie("The Boys", "Comedia/Superheroes", 2019, 68, 24, 3);
    Video *video4 = new Serie("The Witcher", "Fantasia", 2019, 67, 16, 2);
    Video *video5 = new Serie("Date A Live", "Romance/Accion", 2012, 24, 46, 4);
    int opcion, opcion2, _calificacion, filtro, stop;
    while(opcion != 5){
        cout << "Bienvenido al servicio de streaming! Que le gustaria hacer?" << endl;
        cout << "1. Consultar Videos" << endl;
        cout << "2. Calificar alguno" << endl;
        cout << "3. Mostrar Peliculas con cierta calificacion" << endl;
        cout << "4. Mostrar Series con cierta calificacion" << endl;
        cout << "5. Salir" << endl;
        cin >> opcion;
        if(opcion < 1 || opcion > 5){
            cout <<"Opcion Invalida" << endl;
        }
        else if(opcion == 1){
            while(opcion2 != 6){
                cout << "Cual video te interesa?" << endl;
                cout << "1. "+video1->getNombre() << endl;
                cout << "2. "+video2->getNombre() << endl;
                cout << "3. "+video3->getNombre() << endl;
                cout << "4. "+video4->getNombre() << endl;
                cout << "5. "+video5->getNombre() << endl;
                cout << "6. Salir" << endl;
                cin >> opcion2;
                if(opcion2 < 1 || opcion2 > 6){
                    cout << "Opcion Invalida" << endl;
                }
                else{
                    switch(opcion2){
                    case 1:
                        video1->muestraDatos();
                        break;
                    case 2:
                        video2->muestraDatos();
                        break;
                    case 3:
                        video3->muestraDatos();
                        break;
                    case 4:
                        video4->muestraDatos();
                        break;
                    case 5:
                        video5->muestraDatos();
                        break;
                }
                }
            }
            opcion2 = 1;
        }
        else if(opcion == 2){
            while(opcion2 != 3){
                cout << "Quieres calificar una Pelicula o Serie?" << endl;
                cout << "1. Pelicula" << endl;
                cout << "2. Serie" << endl;
                cout << "3. Cancelar" << endl;
                cin >> opcion2;
                if(opcion2 == 1){
                    while(opcion2 != 3){
                        cout << "Cual Pelicula Quieres calificar?" << endl;
                        cout << "1. "+video1->getNombre() << endl;
                        cout << "2. "+video2->getNombre() << endl;
                        cout << "3. Salir" << endl;
                        cin >> opcion2;
                        if(opcion2 < 1 || opcion2 > 3){
                            cout << "Opcion Invalida" << endl;
                        }
                        else if(opcion2 > 0 && opcion2 < 3){
                            cout << "Que calificacion le pones a esta Pelicula? (del 1 al 5)" <<endl;
                            cin >>_calificacion;
                            if(_calificacion > 5 || _calificacion < 1){
                                cout << "Calificacion invalida!" << endl;
                                break;
                            }
                            else{
                                switch(opcion2){
                                    case 1:
                                        video1->calificaVideo(_calificacion);
                                        break;
                                    case 2:
                                        video2->calificaVideo(_calificacion);
                                        break;
                                }
                            }
                        }
                    }
                }
                else if(opcion2 == 2){
                    while(opcion2 != 4){
                        cout << "Cual Serie Quieres calificar?" << endl;
                        cout << "1. "+video3->getNombre() << endl;
                        cout << "2. "+video4->getNombre() << endl;
                        cout << "3. "+video5->getNombre() << endl;
                        cout << "4. Salir" << endl;
                        cin >> opcion2;
                        if(opcion2 < 1 || opcion2 > 4){
                            cout << "Opcion Invalida" << endl;
                        }
                        else if(opcion2 > 0 && opcion2 < 4){
                            cout << "Que calificacion le pones a esta serie? (del 1 al 5)" <<endl;
                            cin >>_calificacion;
                            if(_calificacion > 5 || _calificacion < 1){
                                cout << "Calificacion invalida!" << endl;
                                break;
                            }
                            else{
                                switch(opcion2){
                                    case 1:
                                        video3->calificaVideo(_calificacion);
                                        break;
                                    case 2:
                                        video4->calificaVideo(_calificacion);
                                        break;
                                    case 3:
                                        video5->calificaVideo(_calificacion);
                                        break;
                                }
                            }
                        }
                    }
                }
            }
                
            opcion2 = 1;
        }
        else if(opcion == 3){
            while(opcion2 != stop){
                cout << "Que calificacion quieres usar como busqueda?" << endl;
                cin >> filtro;
                Video *ptr1, *ptr2;
                cout << "Que video pelicula te interesa?" << endl;
                if((video1->getCalificacion()) == filtro){
                    cout << "1. " << video1->getNombre() << endl;
                    ptr1 = video1;
                }
                if(((video2->getCalificacion()) == filtro) && ((video1->getCalificacion()) == filtro)){
                    cout << "2. " << video2->getNombre() << endl;
                    cout << "3. Salir" << endl;
                    ptr2 = video2;
                    stop = 3;
                }
                else if((video2->getCalificacion()) == filtro){
                    cout << "1. " << video2->getNombre() << endl;
                    cout << "2. Salir" << endl; 
                    ptr1 = video2;
                    stop = 2;
                }
                else{
                    cout << "0. Salir" << endl;
                    stop = 0;
                }
                cin >> opcion2;
                switch(opcion2){
                    case 1:
                        if(ptr1 != NULL){
                            ptr1->muestraDatos();
                        }
                        else{
                            cout << "Opcion no valida" << endl;
                        }
                        break;
                    case 2:
                        if(ptr2 != NULL){
                            ptr2->muestraDatos();
                        }
                        else{
                            cout << "Opcion Invalida" << endl;
                        }
                        break;
                    default:
                        cout << "Opcion Invalida" << endl;
                        break;
                }
            }
        stop = -1;
        }    
        else if(opcion == 4){
            while(opcion2 != stop){
                cout << "Que calificacion quieres usar como busqueda?" << endl;
                cin >> filtro;
                std::vector<Video> arr;
                if((video3->getCalificacion()) == filtro){
                    arr.push_back(*video3);
                }
                if((video4->getCalificacion()) == filtro){
                    arr.push_back(*video4);
                }
                if((video5->getCalificacion()) == filtro){
                    arr.push_back(*video5);
                }
                cout << "Que serie te interesa?" << endl;
                for(int c = 0; c < arr.size(); c++){
                    cout << (c+1) << ". " << arr[c].getNombre() << endl;
                }
                cout << (arr.size() + 1) << ". Salir" << endl;
                stop = (arr.size() + 1);
                cin >> opcion2;
                switch(opcion2){
                    case 1:
                        if(stop == opcion2){
                            break;
                        }
                        if((arr.size() >= 1) && stop != 1){
                            arr[0].muestraDatos();
                        }
                        else{
                            cout << "Opcion no valida" << endl;
                        }
                        break;
                    case 2:
                        if(stop == opcion2){
                            break;
                        }
                        if((arr.size() <= 2) && stop != 2){
                            arr[1].muestraDatos();
                        }
                        else{
                            cout << "Opcion Invalida" << endl;
                        }
                        break;
                    case 3:
                        if(stop == opcion2){
                            break;
                        }
                        if((arr.size() <= 3) && stop != 3){
                            arr[2].muestraDatos();
                        }
                        else{
                            cout << "Opcion Invalida" << endl;
                        }
                        break;
                    default:
                        if(stop == opcion2){
                            break;
                        }
                        else{
                            cout << "Opcion Invalida" << endl;
                            break;
                        }
                }
            }
            stop = -1;
        }
    }
}