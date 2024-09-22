#include <iostream>
#include <string.h>
#include"ciclisti.h"
using namespace std;
main()
{
	string n,c;
	double m;
	int x,i;
	ciclisti a;
	ciclisti b;
	cout<<"Inserisci il nome del primo ciclista e premi invio ";
	cin>>n;
	cout<<"Inserisci il codice del primo ciclista e premi invio ";
	cin>>c;
	a.set_ciclista(n,c);
	cout<<"Inserisci il nome del secondo ciclista e premi invio ";
	cin>>n;
	cout<<"Inserisci il codice del secondo ciclista e premi invio ";
	cin>>c;
	b.set_ciclista(n,c);
	cout<<"Inserisci il numero di giri fatti dai ciclisti e premi invio ";
	cin>>x;
	cout<<"Ciclista 1:"<<endl;
	for(i=0;i<x;i++)
	{
		cout<<"Inserisci il minutaggio n."<<i+1<<" e premi invio ";
		cin>>m;
		a.agg(m);
	}
	cout<<"Ciclista 2:"<<endl;
	for(i=0;i<x;i++)
	{
		cout<<"Inserisci il minutaggio n."<<i+1<<" e premi invio ";
		cin>>m;
		b.agg(m);
	}
	if(a.get_minu()!=b.get_minu())
	{
		cout<<"Il ciclista piu' veloce e' "<<endl;
		cout<<"Nome"<<"\t"<<"Codice"<<"\t"<<"Minutaggio"<<endl;
		if(a.get_minu()>b.get_minu())
		{
			cout<<a.get_nome()<<"\t";
			cout<<a.get_cod()<<"\t";
			cout<<a.get_minu()<<endl;
		}
		else
		{
			cout<<b.get_nome()<<"\t";
			cout<<b.get_cod()<<"\t";
			cout<<b.get_minu()<<endl;
		}
	}
	else
	{
		cout<<"I due ciclisti hanno fatto i giri nello stesso tempo";
	}
}
