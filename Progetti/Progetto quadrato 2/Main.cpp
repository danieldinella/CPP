#include <iostream>
#include "quadrato.h"
using namespace std;
main()
{
	float l, p;
	cout<<"Inserisci il lato e premi invio ";
	cin>>l;
	quadrato q;
	q.set_lato(l);
	l=q.get_lato();
	p=l*4;
	q.perimetro();
	q.area();
	cout<<"Perimetro="<<p<<endl;
	cout<<"Perimetro="<<q.get_perimetro()<<endl;
	cout<<"Area="<<q.get_area();
}
