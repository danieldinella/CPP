#include <iostream>
#include"contatore.h"
using namespace std;
main()
{
	contatore c;
	int i,a;
	cout<<"Inserisci un numero e premi invio ";
	cin>>i;
	c.set_k(i);
	a=i;
	do
	{
		cout<<a<<endl;
		a=c.cont();
	}while(a>=0);
}
