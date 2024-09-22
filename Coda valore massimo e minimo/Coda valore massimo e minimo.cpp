//CODA VALORE MASSIMO E MINIMO
#include<iostream>
using namespace std;
struct nodo
{
	int num;
	nodo *next;
};
nodo *testa=NULL;
nodo *coda=NULL;
int a, b;
void insert()
{
	nodo *chiave=NULL;
	chiave=new(nodo);
	cout<<"Inserire numero: ";
	cin>>chiave->num;
	chiave->next=NULL;
	if(testa!=NULL)
	{
		if(a<chiave->num)
		{
			a=chiave->num;
		}
		if(b>chiave->num)
		{
			b=chiave->num;
		}
		coda->next=chiave;
		coda=coda->next;
	}
	else
	{
		a=chiave->num;
		b=chiave->num;
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
		cout<<i++<<"\t"<<chiave->num<<endl;
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
		cout<<"Evaso ordine:__num: "<<chiave->num<<endl;
		delete(chiave);
		chiave=testa;
		a=testa->num;
		b=testa->num;
		while(chiave!=NULL)
		{
			if(a<chiave->num)
			{
				a=chiave->num;
			}
			if(b>chiave->num)
			{
				b=chiave->num;
			}
			chiave=chiave->next;
		}
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
		cout<<"Inserisci:"<<endl<<"1.Per inserire un articolo alla coda"<<endl<<"2.Per visualizzare lo stato della coda";
		cout<<endl<<"3.Per rimuovere un articolo dalla coda"<<endl<<"4.Per calcolare il valore massimo della coda";
		cout<<endl<<"5.Per calcolare il valore minimo della coda"<<endl<<"6.Fine"<<endl;
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
				if(testa!=NULL)
				{
					cout<<"Il valore massimo della coda e' "<<a<<endl;
				}
				else
				{
					cout<<"La coda e' vuota"<<endl;
				}
				break;
			case 5:
				if(testa!=NULL)
				{
					cout<<"Il valore minimo della coda e' "<<b<<endl;
				}
				else
				{
					cout<<"La coda e' vuota"<<endl;
				}
				break;
			default:
				cout<<"Fine";
		}
	}while(n!=6);
}
