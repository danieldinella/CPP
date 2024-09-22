#include<iostream>
#include<string.h>
using namespace std;
struct elemento
{
	string nome;
	string eta;
	elemento *next;
};
elemento *testa=NULL;
main()
{
	int n,i;
	cout<<"Inserisci il numero di persone che si vogliono registrare ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		elemento *chiave;
		chiave=new(elemento);
		cout<<"Inserisci un nome e premi invio ";
		cin>>chiave->nome;
		cout<<"Inserisci l'eta' e premi invio ";
		cin>>chiave->eta;
		chiave->next=NULL;
		if(testa!=NULL)
		{
			chiave->next=testa;
			testa=chiave;
		}
		else
		{
			testa=chiave;
		}
	}
	elemento *chiave=testa;
	i=0;
	cout<<"\n"<<"num"<<"\t"<<"nominativo"<<"\t"<<"eta'"<<"\t"<<"indirizzo"<<"\n";
	while(chiave!=NULL)
	{
		cout<<i++<<"\t";
		cout<<chiave->nome<<"\t"<<"\t";
		cout<<chiave->eta<<"\t";
		cout<<chiave<<endl;
		chiave=chiave->next;
	}
}
