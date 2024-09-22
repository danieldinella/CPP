//STRUCT PUNTATORE
#include<iostream>
#include<string.h>
using namespace std;
main()
{
	int i;
	struct persona
	{
		string nome;
		string cognome;
		float peso;
		int altezza;
	};
	persona key[5];
	persona *p;
	p=&key[0];
	for(i=0;i<5;i++)
	{
		cout<<"Inserisci il nome e premi invio ";
		cin>>(p+i)->nome;
		cout<<"Inserisci il cognome e premi invio ";
		cin>>(p+i)->cognome;
		cout<<"Inserisci il peso e premi invio ";
		cin>>(p+i)->peso;
		cout<<"Inserisci l'altezza e premi invio ";
		cin>>(p+i)->altezza;
	}
	for(i=0;i<5;i++)
	{
		cout<<(p+i)->nome<<" ";
		cout<<(p+i)->cognome<<" ";
		cout<<(p+i)->peso<<" ";
		cout<<(p+i)->altezza<<endl;
	}
}
