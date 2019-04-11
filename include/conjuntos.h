#ifndef CONJUNTO_H
#define CONJUNTO_H

#include <vector>
#include <iostream>

using namespace std;

template <typename T>
class Conjunto{
	private:
		vector<T> elementos;
	public:
		void addElemento(T e);
		void addConjunto(Conjunto c);
		void mostraElementos();
		int total();
		Conjunto();
		~Conjunto();
};

template <typename T>
Conjunto<T>::Conjunto(){

}

template <typename T>
void Conjunto<T>::addElemento(T e){
	elementos.push_back(e);
}

template <typename T>
void Conjunto<T>::addConjunto(Conjunto c){
	int aux = c.elementos.size();

	for (int i = 0; i < aux; i++){
		elementos.push_back(c.elementos[i]);
	}
}

template <typename T>
int Conjunto<T>::total(){
	return elementos.size();
}

template <typename T>
void Conjunto<T>::mostraElementos(){
	int aux = elementos.size();

	for (int i = 0; i < aux; i++){
		cout << i << " - " << elementos[i] << endl;
	}

	cout << endl;
}

template <typename T>
Conjunto<T>::~Conjunto(){

}

#endif