//ESERCIZIO N 33
#include<iostream>
#include<string.h>
using namespace std;
struct nodo
{
	string nome;
	string cognome;
	nodo *next;
};
nodo *testa=NULL;
nodo *coda=NULL;
nodo *chiave=NULL;
void insert()
{
	nodo *chiave=NULL;
	chiave=new(nodo);
	cout<<"Inserire il nome: ";
	cin>>chiave->nome;
	cout<<"Inserire il cognome: ";
	cin>>chiave->cognome;
	chiave->next=NULL;
	if(testa!=NULL)
	{
		coda->next=chiave;
		coda=coda->next;
	}
	else
	{
		testa=chiave;
		coda=testa;
	}
}
void visualizza()
{
	nodo *chiave=NULL;
	chiave=testa;
	int i=0;
	while(chiave!=NULL)
	{
		cout<<i++<<"\t"<<chiave->nome<<"\t"<<chiave->cognome<<endl;
		chiave=chiave->next;
	}
}
void remove()
{
	nodo *chiave=NULL;
	if(testa!=NULL)
	{
		chiave=testa;
		testa=testa->next;
		cout<<"E' il turno di "<<chiave->cognome<<" "<<chiave->nome<<endl;
		delete(chiave);
	}
	else
	{
		cout<<"ATTENZIONE: Lista vuota operazione di evasione non consentita"<<endl;
	}
}
main()
{
	int n;
	do
	{
		cout<<"Inserisci:"<<endl<<"1.Per inserire un cliente alla coda"<<endl<<"2.Per visualizzare lo stato della coda"<<endl<<"3.Per chiamare un cliente dalla coda"<<endl<<"4.Fine"<<endl;
		cin>>n;
		switch(n)
		{
			case 1:
				insert();
				break;
			case 2:
				visualizza();
				break;
			case 3:
				remove();
				break;
			default:
				cout<<"Fine";
		}
	}while(n!=4);
}
