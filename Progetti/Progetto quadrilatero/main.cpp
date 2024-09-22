#include <iostream>
#include "quadrilatero.h"
using namespace std;
main()
{
	quadrilatero q;
	float b,h;
	cout<<"Inserisci la base e premi invio ";
	cin>>b;
	cout<<"Inserisci l'altezza e premi invio ";
	cin>>h;
	q.set_l(b,h);
	if(b==h)
	{
		cout<<"Il quadrilatero e' un quadrato"<<endl;
	}
	else
	{
		cout<<"Il quadrilatero e' un rettangolo"<<endl;
	}
	cout<<"Perimetro= "<<q.perimetro();
}
