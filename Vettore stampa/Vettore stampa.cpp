//VETTORE STAMPA
#include<iostream>
using namespace std;
main()
{
	int v[10], i;
	for(i=0;i<10;i++)
	{
		cout<<"Inserisci un numero e premi invio ";
		cin>>v[i];
	}
	for(i=0;i<10;i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	for(i=9;i>=0;i--)
	{
		cout<<v[i]<<" ";
	}	
}
