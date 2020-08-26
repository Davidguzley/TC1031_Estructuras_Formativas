/*
 * funciones.cpp
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
    long int sumaIterativa(long int num);
    long int sumaRecursiva(long int num);
    long int sumaDirecta(long int num);
};

long int Funciones::sumaIterativa(long int num) {
  long int sum = 0;
  for(long int i = 1; i <= num; i++){
    sum = sum + i;
  }
	return sum;
}

long int Funciones::sumaRecursiva(long int num) {
  if (num > 1){
    return num + sumaRecursiva(num - 1);
  }
  else if(num == 1){
    return 1;
  }
  else{
    return 0;
  }
}

long int Funciones::sumaDirecta(long int num) {
  long int sum = 0;
  sum = ( num * (num + 1) )/2;
  return sum;
}

#endif
