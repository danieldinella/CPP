#include <iostream>
#include "tabl.h"
using namespace std;
main()
{
	tabl t;
	int a;
	do
	{
		cout<<"Inserisci un numero da 0 a 12 e premi invio ";
		cin>>a;
		if(a<0||a>12)
		{
			cout<<"Numero non accettabile riprova"<<endl;
		}
	}while(a<0||a>12);
	t.set_v(a);
	for(int i=0;i<11;i++)
	{
		a=t.tab(i);
		cout<<a<<" ";
	}
}
