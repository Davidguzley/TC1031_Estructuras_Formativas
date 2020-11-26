/*
 * hash.h
 *
 *  Created on: 19/11/2020
 *      Author: David Guzman
 */

#ifndef CHAIN_H_
#define CHAIN_H_

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

template <class Key, class Value>
class Chain {
private:
	unsigned int (*func) (const Key);
	unsigned int size;
	unsigned int count;

	vector<Key> *keys;
	vector<Value> *values;

	long indexOf(const Key) const;

public:
	Chain(unsigned int, unsigned int (*f) (const Key));
	~Chain();
	bool full() const;
	bool put(Key, Value);
	bool contains(const Key) const;
	Value get(const Key);
	string toString() const;
};

template <class Key, class Value>
Chain<Key, Value>::Chain(unsigned int sze, unsigned int (*f) (const Key)){
	size = sze;

	keys = new vector<Key>[size];
	if (keys == 0) {
		cout<<"Sin memoria"<<endl;
	}

	values = new vector<Value>[size];
	if (values == 0) {
		cout<<"Sin memoria"<<endl;
	}

	func = f;
	count = 0;
}

template <class Key, class Value>
Chain<Key, Value>::~Chain() {
	delete [] keys;
	keys = 0;
	delete [] values;
	values = 0;
	size = 0;
	func = 0;
	count = 0;
}

template <class Key, class Value>
bool Chain<Key, Value>::full() const {
	return (count >= size);
}

template <class Key, class Value>
long Chain<Key, Value>::indexOf(const Key k) const {
	return func(k) % size;
}

template <class Key, class Value>
bool Chain<Key, Value>::put(Key k, Value v) {
	unsigned int i, start;
	long pos;

	if (full()) {
		cout<<"No hay espacio"<<endl;
	}

	pos = indexOf(k);
	if (keys[pos].empty()) {
    keys[pos].push_back(k);
		values[pos].push_back(v);
    count++;
		return true;
	}

  else{
    for(int i=0; i < keys[pos].size(); i++){
      if(keys[pos][i] == k){
        values[pos][i] = v;
        return true;
      }
    }
    keys[pos].push_back(k);
    values[pos].push_back(v);
    count++;
    return true;
  }
}

template <class Key, class Value>
bool Chain<Key, Value>::contains(const Key k) const {
	long pos;
	pos = indexOf(k);
  for(int i=0; i < keys[pos].size(); i++){
    if(keys[pos][i] == k){
      return true;
    }
  }
	return false;
}

template <class Key, class Value>
Value Chain<Key, Value>::get(const Key k) {
	unsigned int i, start;
	long pos;
	pos = indexOf(k);
  for(int i=0; i < keys[pos].size(); i++){
    if(keys[pos][i] == k){
      return values[pos][i];
    }
  }
  cout<<"llave incorrecta"<<endl;
}

template <class Key, class Value>
string Chain<Key, Value>::toString() const {
	stringstream aux;
	for (int i = 0; i < size; i++){
			if (!keys[i].empty()){
				aux <<"(" << i ;
				for (int j = 0; j < keys[i].size(); j ++){
						 aux << " [" << keys[i][j] << " : " << values[i][j] << "]";
				}
				aux <<") ";
			}
	}
	return aux.str();
}

#endif