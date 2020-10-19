/*
 * heap.h
 *
 *  Created on: 218/10/2020
 *      Author: David Guzman Leyva
 */

#ifndef HEAP_H_
#define HEAP_H_

#include <string>
#include <sstream>
#include <iostream>

using namespace std;

template <class T>
class Heap {
private:
	T *data; //En donde se almacenan los datos
	int tam; //cantidad maxima de datos
	int count; //Cantidad actual de datos
	int parent(int) const; //Papa
	int left(int) const; //Hijo
	int right(int) const; //Hijo
	void swap(int, int);
    void heapify(int); //acomoda la fila
public:
	Heap(int); //constructor
	void push(T); //añade valor
	void pop(); //Elimina la raiz
    T top() const; //Saca la raiz
    bool empty() const; //hay datos almacenados?
    int size() const; //cuantos valores estan almacenados?
	string toString() const; //guarda fila en string
};

template <class T>
Heap<T>::Heap(int sze) { //constructor
	tam = sze;
	data = new T[tam]; //arreglo creado
	count = 0;
}

template <class T>
int Heap<T>::parent(int pos) const {
	return (pos - 1) / 2;
}

template <class T>
int Heap<T>::left(int pos) const {
	return ((2 * pos) + 1);
}

template <class T>
int Heap<T>::right(int pos) const {
	return ((2 * pos) + 2);
}

template <class T>
void Heap<T>::swap(int i, int j) {
	T aux = data[i];
	data[i] = data[j];
	data[j] = aux;
}

template <class T>
void Heap<T>::heapify(int pos) {
	int le = left(pos);
	int ri = right(pos);
	int min = pos;
	if (le <= count && data[le] < data[min]) {
		min = le;
	}
	if (ri <= count && data[ri] < data[min]) {
		min = ri;
	}
	if (min != pos) {
		swap(pos, min);
		heapify(min);
	}
}

template <class T>
void Heap<T>::push(T val){ //añade valor
	int pos;
	pos = count;
	count++;

	while (pos > 0 && val < data[parent(pos)]) {
		data[pos] = data[parent(pos)];
		pos = parent(pos);
	}
	data[pos] = val;
}

template <class T>
void Heap<T>::pop(){
	T aux = data[0];

	data[0] = data[--count];
	heapify(0);
}

template <class T>
T Heap<T>::top() const{
	T aux = data[0];
	return aux;
}

template <class T>
bool Heap<T>::empty() const {
	return (count == 0);
}

template <class T>
int Heap<T>::size() const{
	return count;
}

template <class T>
string Heap<T>::toString() const {
	stringstream aux;
	aux << "[";	for (int i = 0; i < count; i++) {
		if (i != 0) {
			aux << " ";
		} aux << data[i];
	} aux << "]";
	return aux.str();
}

#endif
