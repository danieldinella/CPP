//OPERATORI DI CONFRONTO
#include<iostream>
using namespace std;
main()
{
	short int a,b;
	short int *pa,*pb;
	pa=&a;
	pb=&b;
	if(pa==pb)
	{
		cout<<"I puntatori puntano la stessa area di memoria";
	}
	else
	{
		if(pa<pb)
		{
			cout<<"La variabile puntata da pa precede in memoria la variabile puntata in memoria da pb";
		}
		else
		{
			cout<<"La variabile puntata da pb precede in memoria la variabile puntata in meoria da pa";
		}
	}
}
