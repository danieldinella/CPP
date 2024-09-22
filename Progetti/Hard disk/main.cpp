#include <iostream>
#include <string>
#include "harddisk.h"
using namespace std;
main()
{
	string m;
	int v,t,c,p1,p2,i,j=0,x=0;
	harddisk h[5];
	for(i=0;i<5;i++)
	{
		cout<<"Hard disk "<<i<<":"<<endl;
		cout<<"Inserisci la marca e premi invio ";
		cin>>m;
		cout<<"Inserisci la velocita' espressa in rotazioni per minuto ";
		cin>>v;
		cout<<"Inserisci il tempo di accesso espresso in millisecondi ";
		cin>>t;
		cout<<"Inserisci la capacita' espressa in Gb ";
		cin>>c;
		harddisk h[i](m,v,t,c);
	}
	p1=h[0].punteggio();
	p2=h[0].punteggio();
	for(i=1;i<5;i++)
	{
		if(p1<h[i].punteggio())
		{
			p1=h[i].punteggio();
			j=i;
		}
		if(p2>h[i].punteggio())
		{
			p2=h[i].punteggio();
			x=i;
		}
	}
	cout<<"L'hard disk con il punteggio maggiore e':"<<endl;
	h[j].stampadati();
	cout<<"L'hard disk con il punteggio minore e':"<<endl;
	h[x].stampadati();
}
