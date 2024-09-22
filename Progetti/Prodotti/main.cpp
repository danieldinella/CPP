#include <iostream>
#include"prodotti.h"
using namespace std;
main()
{
	prodotti a;
	string cod,des;
	float pre;
	int num,x,y;
	cout<<"Inserisci il codice a barre e premi invio ";
	cin>>cod;
	cout<<"Inserisci una descrizione sintetica e premi invio ";
	cin>>des;
	cout<<"Inserisci il prezzo unitario del prodotto e premi invio ";
	cin>>pre;
	cout<<"Inserisci il numero di prodoti nel magazzino ";
	cin>>num;
	a.set(cod,des,pre,num);
	cout<<"Se vuoi applicare uno sconto del 5% inserisci 1 ";
	cin>>y;
	if(y==1)
	{
		a.applicasconto();
	}
	cout<<"Quanti pezzi sono stati venduti? ";
	cin>>x;
	cout<<"Valore guadagnato dalla vendita: "<<a.vendi(x)<<endl;
	cout<<"Codice a barre"<<"\t"<<"Descrizione"<<"\t"<<"Prezzo unitario"<<"\t"<<"\t"<<"Numero prodotti rimasti"<<"\t"<<"\t"<<"Valore in magazzino"<<endl;
	cout<<a.get_c()<<"\t"<<"\t"<<a.get_d()<<"\t"<<"\t"<<a.get_p()<<"\t"<<"\t"<<"\t"<<a.get_n()<<"\t"<<"\t"<<"\t"<<"\t"<<a.valore();
}
