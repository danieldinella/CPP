#include <iostream>
#include"frazione.h"
using namespace std;
main()
{
	frazione x;
	frazione y;
	frazione r;
	int a,b;
	cout<<"Inserisci il numeratore della prima frazione e premi invio ";
	cin>>a;
	do
	{
		cout<<"Inserisci il denominatore della prima frazione e premi invio ";
		cin>>b;
	}while(b==0);
	x.set_n(a);
	x.set_d(b);
	cout<<"Inserisci il numeratore della seconda frazione e premi invio ";
	cin>>a;
	do
	{
		cout<<"Inserisci il denominatore della seconda frazione e premi invio ";
		cin>>b;
	}while(b==0);
	y.set_n(a);
	y.set_d(b);
	cout<<"I valori delle due frazioni sono"<<endl;
	cout<<x.calcola()<<"\t"<<y.calcola()<<endl;
	r=r.moltiplicazione(x,y);
	cout<<"Il risultato della moltiplicazione tra le due frazioni e'"<<endl;
	cout<<r.get_n()<<"/"<<r.get_d()<<endl;
	r=r.divisione(x,y);
	cout<<"Il risultato della divisione tra le due frazioni e'"<<endl;
	cout<<r.get_n()<<"/"<<r.get_d()<<endl;
	cout<<"Le due frazioni semplificate sono"<<endl;
	r=r.semplifica(x);
	cout<<r.get_n<<"/"<<r.get_d<<"\t";
	r=r.semplifica(y);
	cout<<r.get_n<<"/"<<r.get_d<<endl;
	r=r.addizione(x,y);
	cout<<"Il risultato dell'addizione tra le due frazioni e'"<<endl;
	cout<<r.get_n<<"/"<<r.get_d;
}
