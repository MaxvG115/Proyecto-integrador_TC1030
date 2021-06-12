#include "Series.h"
#include <iostream>
#include <string>

using namespace std;

Series::Series(){
    ID=0;
    nombre="Sin nombre";
    duracion=0;
    genero= "Sin genero";
    num_Temporadas = 0;
    arr = new Temporada[1];
}

Series::Series(int I, string nom, int dur, string gen,Temporada* temps,int num_T
){ //Alguien ayudeme con esta cosa
  ID=I;
  nombre=nom;
  duracion=dur;
  genero=gen;
  arr = temps;
  this->num_Temporadas = num_T;

}

int Series::Get_num_temp(){
    return num_Temporadas; //Devolver el numero de temporada.

}

void Series::Set_num_temp(int n){
    num_Temporadas = n; //Cambiar el valor de num_Temporadas. Pero no afecta al vector creado con el constructor.
}

void Series::Set_temporada(Temporada nuevatemp,int n){
    arr[n] = nuevatemp; //Cambiar una tmeporada en especifico por otra
}

Temporada Series::Get_temporada(int n){
    return arr[n]; //Devolver determinada temporada

}




void Series::evaluacion(){ //Devuelve el promedio de las temporadas.
    float sumatoria = 0;
    for (int i=0; i < num_Temporadas; i++)
    {
        sumatoria = sumatoria + arr[i].get_Calificacion_Tem();
    }
    calificacion = sumatoria/num_Temporadas;

}


void Series::print()
{
  cout<<"ID: "<<ID<<endl
  <<"Nombre: "<<nombre<<endl
  <<"Duracion: "<<duracion << " min." << endl
  <<"Genero: "<<genero<<endl
  <<"Calificacion: "<<calificacion << "\n\n";

  for(int i=0;i<num_Temporadas;i++)
  {
    cout<<"Temporada"<<i+1<<":"<<endl;
    for(int n=0;n<arr[i].get_Size();n++)
    {
      cout<<"-"<<arr[i].get_Episodio(n)<<endl;
    }
    
  }
}

