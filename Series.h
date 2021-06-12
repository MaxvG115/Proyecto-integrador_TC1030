#include "Videos.h"
#include <iostream>
#include "Temporada.h"

using namespace std;

class Series : public Videos {
private:
    Temporada* arr;
    int num_Temporadas;
public:
 //Constructores
 Series();
 Series(int,string,int,string,Temporada*,int);

 //Setters and Getters
 int Get_num_temp();
 void Set_num_temp(int);

 void Set_temporada(Temporada,int);
 Temporada Get_temporada(int);

 //Funcion

 void evaluacion();

 void print();
};