#include <iostream>
#include"rettangolo.h"
using namespace std;
main()
{
	rettangolo r;
	float x,y;
	cout<<"Inserisci la base e premi invio ";
	cin>>x;
	cout<<"Inserisci l'altezza e premi invio ";
	cin>>y;
	r.set_base(x);
	r.set_altezza(y);
	cout<<"Il perimetro e' "<<r.perimetro()<<endl;
	cout<<"L'area e' "<<r.area();
}
