#include <iostream>
#include "euclidea.h"
using namespace std;
main()
{
	euclidea e;
	double a,b;
	cout<<"Inserisci x1 e premi invio ";
	cin>>a;
	cout<<"Inserisci x2 e premi invio ";
	cin>>b;
	e.set_x1(a);
	e.set_x2(b);
	cout<<"La distanza euclidea e' "<<e.d();
}
