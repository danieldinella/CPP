//ESERCIZIO N 28
#include<iostream>
using namespace std;
struct nodo
{
	int n;
	nodo *next;
};
nodo *testa=NULL;
nodo *coda=NULL;
void insert()
{
	nodo *chiave;
	chiave=new(nodo);
	cout<<"Inserire articolo: ";
	cin>>chiave->n;
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
	nodo *chiave;
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
	nodo *chiave;
	if(testa!=NULL)
	{
		chiave=testa;
		testa=testa->next;
		cout<<"Evaso ordine:__art: "<<chiave->n<<endl;
		delete(chiave);
	}
	else
	{
		cout<<"ATTENZIONE: Lista vuota operazione di evasione non consentita"<<endl;
	}
}
void inverti()
{
	int i=-1, v[10];
	nodo *chiave=testa;
	while(chiave!=NULL)
	{
		i++;
		v[i]=chiave->n;
		chiave=chiave->next;
	}
	chiave=testa;
	while(chiave!=NULL)
	{
		chiave->n=v[i];
		i--;
		chiave=chiave->next;
	}
}
main()
{
	int n;
	do
	{
		cout<<"Inserisci:"<<endl<<"1.Per inserire un articolo alla coda"<<endl<<"2.Per visualizzare lo stato della coda"<<endl<<"3.Per rimuovere un articolo dalla coda"<<endl<<"4.Per invertire gli elementi della coda"<<endl<<"5.Fine"<<endl;
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
			case 4:
				inverti();
				break;
			default:
				cout<<"Fine";
		}
	}while(n!=5);
}
