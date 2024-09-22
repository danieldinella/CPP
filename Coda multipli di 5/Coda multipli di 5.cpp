//CODA MULTIPLI DI 5
#include<iostream>
using namespace std;
struct nodo
{
	int n;
	nodo *next;
};
nodo *testa=NULL;
nodo *coda=NULL;
int i=0;
void insert()
{
	nodo *chiave=NULL;
	chiave=new(nodo);
	cout<<"Inserire numero: ";
	cin>>chiave->n;
	if(chiave->n%5==0)
	{
		i++;
	}
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
		cout<<i++<<"\t"<<chiave->n<<endl;
		chiave=chiave->next;
	}
}
void remove()
{
	nodo *chiave=NULL;
	if(testa!=NULL)
	{
		chiave=testa;
		if(chiave->n%5==0)
		{
			i--;
		}
		testa=testa->next;
		cout<<"Evaso ordine:__num: "<<chiave->n<<endl;
		delete(chiave);
	}
	else
	{
		cout<<"ATTENZIONE: Lista vuota operazione di evasione non consentita"<<endl;
	}
}
main()
{
	int a;
	do
	{
		cout<<"Inserisci:"<<endl<<"1.Per inserire un articolo alla coda"<<endl<<"2.Per visualizzare lo stato della coda"<<endl<<"3.Per rimuovere un articolo dalla coda"<<endl<<"4.Calcola il numero di multipli di 5 nella coda"<<endl<<"5.Fine"<<endl;
		cin>>a;
		switch(a)
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
			case 4:
				cout<<"Il numero di multipli di 5 e' "<<i<<endl;
				break;
			default:
				cout<<"Fine"<<endl;
		}
	}while(a!=5);
}
