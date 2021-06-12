#include <iostream>
#include <string>
#include "Videos.h"

using namespace std;

class Peliculas : public Videos{

  public:
  //constructores
  Peliculas();
  Peliculas(int,string,int,string);

  //metodos
  void evaluacion(float);
  void print();

};
