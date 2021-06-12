#include "Videoteca.h"
#include <iostream>

using namespace std;

Videoteca::Videoteca()
{
  arrs = new Series[1];
  size_S = 1;
  arrp = new Peliculas[1];
  size_P = 1;
  Size = 2;
}

Videoteca::Videoteca(int p, int s)
{
  size_P = p;
  arrp = new Peliculas[p];
  arrs = new Series[s];
  size_S = s;
  Size=s+p;
}

Videoteca::Videoteca(int ss, Series * arrS, int sp, Peliculas * arrP)
{
  arrs = arrS;
  size_S=ss;
  arrp=arrP;
  size_P=sp;
  Size=ss+sp;
}

void Videoteca::set_size(int s)
{
  Size=s;
}

int Videoteca::get_size()
{
  return Size;
}

void Videoteca::print()
{
  cout<<"===Peliculas==="<<endl;
  for(int i=0;i<size_P;i++)
  {
    arrp[i].print();
    cout<<endl;
  }

  cout<<"===Series=== "<<endl;
  for(int i=0;i<size_S;i++)
  {
    arrs[i].print();
    cout<<endl;
  }
}
