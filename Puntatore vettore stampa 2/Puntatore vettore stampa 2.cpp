//PUNTATORE VETTORE STAMPA 2
#include<iostream>
using namespace std;
main()
{
	int v[10], i;
	int *pv;
	pv=&v[0];
	for(i=0;i<10;i++)
	{
		cout<<"Inserisci un numero e premi invio ";
		cin>>*(pv+i);
	}
	for(i=0;i<10;i++)
	{
		cout<<*(pv+i)<<" "<<pv+i<<endl;
	}
	cout<<endl;
	for(i=9;i>=0;i--)
	{
		cout<<*(pv+i)<<" "<<pv+i<<endl;
	}	
}
