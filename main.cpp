#include <iostream>
#include <string>
#include "Videoteca.h"


using namespace std;

int main() {

/*
a. Crear 1 videoteca
b. Crear 2 películas y 2 series y agregarlas a la videoteca
c. Las series deberán tener 2 temporadas y cada temporada deberá tener al menos 2
episodios.
d. Evaluar todas las 2 películas
e. Evaluar cada temporada de las 2 series.
f. Mostrar la información de la videoteca 
*/

//Creacion de Peliculas
Peliculas Pelicula1(1233,"IT",140,"Terror");
Peliculas Pelicula2(0772,"The End of Evangelion",117,"Anime");

//Evaluacion de peliculas
Pelicula1.evaluacion(8.72);
Pelicula2.evaluacion(9.3);

Peliculas arrpeli[2]={Pelicula1,Pelicula2};


//Creacion de las temporadas de la primera serie
string s1temp1ep[2]={"El comienzo","El final?"};
string s1temp2ep[2]={"El regreso","Final"};

Temporada Serie1Temp1(2,s1temp1ep);
Temporada Serie1Temp2(2,s1temp2ep);

//Evaluacion de cada temporada
Serie1Temp1.evaluar(8.9);
Serie1Temp2.evaluar(9.5);

Temporada s1Temporadas[2]={Serie1Temp1,Serie1Temp2};

//Creacion de la primera serie
Series Serie1(1575,"Batman",200,"Misterio",s1Temporadas,2);

//Calculo de la calificacion de la serie
Serie1.evaluacion();

//Creacion de las temporadas de la segunda serie
string s2temp1ep[2]={"El mas rapido","En contra"};
string s2temp2ep[2]={"Rapidez","El final de flash"};

Temporada Serie2Temp1(2,s2temp1ep);
Temporada Serie2Temp2(2,s2temp2ep);

//Evaluacion de las temporadas
Serie2Temp1.evaluar(5.8);
Serie2Temp2.evaluar(7.2);

Temporada s2Temporadas[2]={Serie2Temp1,Serie2Temp2};

//Creación de la segunda serie
Series Serie2(8520,"Flash",410,"Superheroes",s2Temporadas,2);

//Calculo de la calificadion de la segunda serie
Serie2.evaluacion();

Series arrser[2]={Serie1,Serie2};

//Creacion de la videoteca
Videoteca Videoteca1(2,arrser,2,arrpeli);

//Mostrar los objetos de la videoteca
Videoteca1.print();

}
