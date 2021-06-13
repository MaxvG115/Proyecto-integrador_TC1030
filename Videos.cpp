#include "Videos.h"

/*
    int ID;
    string nombre;
    int duracion; //en minutos
    string genero;
    float calificacion;
*/

//------------------------------------------------------------//
//----------------------Constructores-------------------------//
//------------------------------------------------------------//

Videos::Videos()
{
  this->ID = 0;
  this->nombre = "Desconocido";
  this->duracion = 0;
  this->genero = "Desconocido";
}
Videos::Videos(int ID, string nombre, int duracion, string genero)
{
  this->ID = ID;
  this->nombre = nombre;
  this->duracion = duracion;
  this->genero = genero;
}

//------------------------------------------------------------//
//-------------------------Funciones--------------------------//
//------------------------------------------------------------//

void Videos::evaluacion(float calificacion)
{ 
  this -> calificacion = calificacion;
}

//------------------------------------------------------------//
//--------------------------Getters---------------------------//
//------------------------------------------------------------//

int Videos::get_ID()
{
  return ID;
} 
string Videos::get_Nombre()
{
  return nombre;
} 
int Videos::get_Duracion()
{
  return duracion;
} 
string Videos::get_Genero()
{
  return genero;
} 
float Videos::get_Calificacion()
{
  return calificacion;
} 

//------------------------------------------------------------//
//--------------------------Setters---------------------------//
//------------------------------------------------------------//

void Videos::set_ID(int ID)
{
  this->ID = ID;
} 
void Videos::set_Nombre(string nombre)
{
  this->nombre = nombre;
} 
void Videos::set_Duracion(int duracion)
{
  this->duracion = duracion;
} 
void Videos::set_Genero(string genero)
{
  this->genero = genero;
} 
void Videos::set_Calificacion(float calificacion)
{
  this->calificacion = calificacion;
} 


