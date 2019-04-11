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
		vector<T> getElementos();
		void addElemento(T e);
		void addConjunto(Conjunto &c);
		void mostraElementos();
		int total();
		Conjunto();
		~Conjunto();
/*
		Conjunto operator+(Conjunto &c);
		Conjunto operator-(Conjunto &c);
		Conjunto operator*(Conjunto &c);
*/
};

template <typename T>
Conjunto<T>::Conjunto(){

}

template <typename T>
void Conjunto<T>::addElemento(T e){
	elementos.push_back(e);
}

template <typename T>
void Conjunto<T>::addConjunto(Conjunto &c){
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
vector<T> Conjunto<T>::getElementos(){
	return elementos;
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

template <typename T>
Conjunto Conjunto<T>::operator+(Conjunto &c){
	Conjunto<T> a;

	for(int i = 0; i < total(); i++){
		a.push_back(elementos[i]);
	}

	for(int i = 0; i < c.total(); i++){
		a.push_back(c.getElementos()[i]);
	}

	for (int i = 0; i < a.total(); i++){
		for (int j = 0; j < a.total(); j++)	{
			if(a.getElementos()[i] == a.getElementos()[j] && i != j)
				a.getElementos().erase(begin() + i);
		}
	}

	return a;
}

#endif