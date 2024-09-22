//MEDIA PUNTATORE
#include<iostream>
using namespace std;
main()
{
	float *punt1, *punt2;
	float a, b;
	int i;
	punt1=&a;
	punt2=&b;
	cout<<"Inserisci 10 numeri uno alla volta e premi invio"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>*punt1;
		*punt2=*punt2+*punt1;
	}
	*punt2=*punt2/10;
	cout<<"La media dei 10 numeri inseriti e' "<<*punt2;
}
