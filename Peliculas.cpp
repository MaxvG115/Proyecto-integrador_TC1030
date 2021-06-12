#include <iostream>
#include <string>
#include "Peliculas.h"

using namespace std;

  Peliculas::Peliculas(){
    int ID=0;
    string nombre="Sin nombre";
    int duracion=0;
    string genero="Sin genero";
    
  }

  Peliculas::Peliculas(int ID, string nombre, int duracion, string genero): Videos( ID,  nombre,  duracion,  genero){
    
  }

  void Peliculas::evaluacion(float calificacion){
    this -> calificacion = calificacion;
  }

  void Peliculas::print(){

    cout << "ID: " << ID <<endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Duracion: " << duracion << " min." << endl;
    cout << "Genero: " << genero << endl;
    cout << "Calificacion: " << calificacion << endl;

  }
