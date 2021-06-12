#ifndef TEMPORADA_H
#define TEMPORADA_H
#include <iostream>
#include <string>

using namespace std;

class Temporada
{
  private:
  string *arr_Episodios;
  int size;
  float calificacion_tem;

  public:
  Temporada();
  Temporada(int, string*);
  
  int get_Size();
  float get_Calificacion_Tem();
  string get_Episodio(int);
  
  void set_Size(int);
  void evaluar(float);
  void set_Episodio(int, string);
};
#endif
