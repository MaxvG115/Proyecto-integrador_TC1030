#ifndef VIDEOS_H
#define VIDEOS_H

#include <iostream>
#include <string>

using namespace std;


class Videos
{
  protected:
    int ID;
    string nombre;
    int duracion; //en minutos
    string genero;
    float calificacion;

  public:
    Videos();
    Videos(int, string, int, string);

    int get_ID();
    string get_Nombre();
    int get_Duracion();
    string get_Genero();
    float get_Calificacion();

    void set_ID(int);
    void set_Nombre(string);
    void set_Duracion(int);
    void set_Genero(string);
    void set_Calificacion(float);

    virtual void evaluacion(float);

};

#endif

