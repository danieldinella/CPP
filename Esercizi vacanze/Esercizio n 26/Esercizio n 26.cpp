//ESERCIZIO N 26
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
float a=0;
void insert()
{
	nodo *chiave;
	chiave=new(nodo);
	cout<<"Inserire articolo: ";
	cin>>chiave->n;
	chiave->next=NULL;
	i++;
	a=a+chiave->n;
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
void mas()
{
	nodo *chiave;
	chiave=testa;
	int mas, x=0, j=0;
	mas=a/i;
	while(chiave!=NULL)
	{
		if(chiave->n>mas)
		{
			x++;
		}
		if(chiave->n<mas)
		{
			j++;
		}
		chiave=chiave->next;
	}
	cout<<"Il numero dei valori maggiori della media e' "<<x<<endl;
	cout<<"Il numero dei valori minori della media e' "<<j<<endl;
}
main()
{
	int n;
	do
	{
		cout<<"Inserisci:"<<endl<<"1.Per inserire un articolo alla coda"<<endl<<"2.Per visualizzare lo stato della coda"<<endl<<"3.Per rimuovere un articolo dalla coda"<<endl<<"4.Per calcolare i valori maggiori e minori della media"<<endl<<"5.Fine"<<endl;
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
				mas();
				break;
			default:
				cout<<"Fine";
		}
	}while(n!=5);
}
