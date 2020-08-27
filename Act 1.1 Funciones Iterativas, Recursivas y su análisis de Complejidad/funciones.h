/*
 * funciones.h
 *
 *  Created on: 26/08/2020
 *      Author: David Guzmán Leyva
 *      Matricula: A01706417
 */

#ifndef FUNCIONES_H
#define FUNCIONES_H

class Funciones{
public:
    Funciones(){};
    long int sumaIterativa(long int n);
    long int sumaRecursiva(long int n);
    long int sumaDirecta(long int n);
};

long int Funciones::sumaIterativa(long int n) {
  long int sum = 0;
  for(long int i = 1; i <= n; i++){
    sum = sum + i;
  }
	return sum;
}

long int Funciones::sumaRecursiva(long int n) {
  if (n > 1){
    return n + sumaRecursiva(n - 1);
  }
  else if(n == 1){
    return 1;
  }
  else{
    return 0;
  }
}

long int Funciones::sumaDirecta(long int n) {
  long int sum = 0;
  sum = ( n * (n + 1) )/2;
  return sum;
}

#endif
