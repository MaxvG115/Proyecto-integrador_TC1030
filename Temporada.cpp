#include <iostream>
#include <string>
#include "Temporada.h"

using namespace std;

Temporada::Temporada()
{
  arr_Episodios = new string[1];
  size = 0;
  calificacion_tem = 0;
}

Temporada::Temporada(int size, string* arr_Episodios)
{
  this-> size = size;
  this-> arr_Episodios = arr_Episodios;
}

int Temporada::get_Size()
{
  return size;
}

string Temporada::get_Episodio(int Num_Episodio)
{
  return arr_Episodios[Num_Episodio];
}

float Temporada::get_Calificacion_Tem()
{
  return calificacion_tem;
}


void Temporada::set_Size(int size)
{
  this-> size = size;
}

void Temporada::evaluar(float calificacion_tem)
{
  this-> calificacion_tem = calificacion_tem;
}

void Temporada::set_Episodio(int Num_Episodio, string Nombre_Episodio)
{
  arr_Episodios[Num_Episodio] = Nombre_Episodio;
}
