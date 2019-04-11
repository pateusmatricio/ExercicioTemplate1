#include <iostream>

#include "conjuntos.h"

int main(int argc, char const *argv[])
{
	Conjunto<int> a;
	a.addElemento(2);
	a.addElemento(3);
	a.addElemento(78);

	Conjunto<float> b;
	b.addElemento(4.56);
	b.addElemento(22.22);
	//b.addConjunto(a);

	Conjunto<char> c;
	c.addElemento('a');
	c.addElemento('F');
	c.addElemento(27);
	c.addElemento(12);
	//c.addConjunto(a);

	Conjunto<int> d;
	d.addElemento(12345);
	d.addConjunto(a);
	d.addElemento(123);

	a.mostraElementos();
	b.mostraElementos();
	c.mostraElementos();
	d.mostraElementos();


	return 0;
}