#include <iostream>
#include "cerchio.h"
using namespace std;
main()
{
	cerchio c;
	double a;
	cout<<"Inserisci il raggio e premi invio ";
	cin>>a;
	c.set_raggio(a);
	cout<<"Circonferenza= "<<c.circonferenza()<<endl;
	cout<<"Area= "<<c.area();
}
