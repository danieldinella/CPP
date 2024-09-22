//STRUCT PUNTATORE
#include<iostream>
#include<string.h>
using namespace std;
main()
{
	struct persona
	{
		string nome;
		string cognome;
		float peso;
		int altezza;
	};
	persona key;
	persona *p;
	p=&key;
	cout<<"Inserisci il nome e premi invio ";
	cin>>p->nome;
	cout<<"Inserisci il cognome e premi invio ";
	cin>>p->cognome;
	cout<<"Inserisci il peso e premi invio ";
	cin>>p->peso;
	cout<<"Inserisci l'altezza e premi invio ";
	cin>>p->altezza;
	cout<<p->nome<<endl;
	cout<<p->cognome<<endl;
	cout<<p->peso<<endl;
	cout<<p->altezza;
}
