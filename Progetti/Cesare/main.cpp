#include <iostream>
#include"cesare.h"
using namespace std;
main()
{
	int n,i,dim;
	char v[10];
	cesare c;
	cout<<"Inserisci la chiave di crittografia e premi invio ";
	cin>>n;
	c.set_k(n);
	cout<<"Insersici il numero di lettere del messaggio e premi invio ";
	cin>>dim;
	cout<<"Inserisci tutte le lettere del messaggio una per volta premendo invio"<<endl;
	for(i=0;i<dim;i++)
	{
		cin>>v[i];
	}
	cout<<"Il messaggio crittografato e': ";
	for(i=0;i<dim;i++)
	{
		cout<<c.crittografia(v[i]);
	}
}
