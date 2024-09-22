#include <iostream>
#include "distanza.h"
using namespace std;
main()
{
	double r,a,b,t;
	cout<<"Inserisci la lunghezza del raggio e premi invio ";
	cin>>r;
	cout<<"Inserisci la coordinata x e premi invio ";
	cin>>a;
	cout<<"Inserisci la coordinata y e premi invio ";
	cin>>b;
	distanza c(a,b);
	t=c.d();
	if(t<r)
	{
		cout<<"Il punto e' dentro alla circonferenza"<<endl;
	}
	else
	{
		if(t==r)
		{
			cout<<"Il punto si trova sulla circonferenza"<<endl;
		}
		else
		{
			cout<<"Il punto si trova fuori dalla circonferenza"<<endl;
		}
	}
}
