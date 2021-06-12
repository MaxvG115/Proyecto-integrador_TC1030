#include <iostream>
#include "Series.h"
#include "Peliculas.h"

using namespace std;

class Videoteca
{
  private:
    Series * arrs;
    int size_S;
    Peliculas * arrp;
    int size_P;
    int Size;


  public:
    Videoteca();
    Videoteca(int, int);
    Videoteca(int,Series*,int,Peliculas*);
    void set_size(int);
    int get_size();
    void print();
};
