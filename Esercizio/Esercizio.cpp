//ESERCIZIO
#include<iostream>
using namespace std;
struct nodo
{
	int num;
	nodo *next;
};
nodo *testa=NULL;
nodo *coda=NULL;
nodo *testa2=NULL;
nodo *coda2=NULL;
void insert()
{
	nodo *chiave=NULL;
	chiave=new(nodo);
	cout<<"Inserire numero: ";
	cin>>chiave->num;
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
		cout<<i++<<"\t"<<chiave->num<<endl;
		chiave=chiave->next;
	}
}
void visualizza2()
{
	nodo *chiave=NULL;
	nodo *chiave2=NULL;
	chiave=testa;
	chiave2=testa2;
	int i=0;
	while(chiave!=NULL)
	{
		cout<<i++<<"\t"<<chiave->num<<endl;
		chiave=chiave->next;
	}
	cout<<endl;
	i=0;
	while(chiave2!=NULL)
	{
		cout<<i++<<"\t"<<chiave2->num<<endl;
		chiave2=chiave2->next;
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
	}
	else
	{
		cout<<"ATTENZIONE: Lista vuota operazione di evasione non consentita"<<endl;
	}
}
void cambio()
{
	if(testa!=NULL)
	{
		nodo *chiave=testa, *chiave2=NULL;
		chiave2=new(nodo);
		chiave2=chiave->next;
		while(chiave!=NULL)
		{	
			if(chiave==testa)
			{
				chiave=chiave2;
			}
			else
			{
				chiave2=new(nodo);
				chiave2=chiave2->next;
				nodo *chiave=chiave2;
			}
			if(testa2!=NULL)
			{
				coda2->next=chiave;
				coda2=coda2->next;
			}
			else
			{
				testa2=chiave;
				coda2=testa2;
			}
			chiave2=chiave->next;
			delete(chiave);
			coda->next=chiave2;
			coda=coda->next;
		}
	}
	else
	{
		cout<<"La coda e' vuota"<<endl;
	}
}
void cambio2()
{
	if(testa!=NULL)
	{
		nodo *chiave=testa;
		nodo *chiave2=testa2, *a;
		while(chiave2!=NULL)
		{
			if(testa2!=NULL)
			{
				a=chiave2;
				chiave2->next=chiave->next;
				chiave->next=chiave2;
				chiave=chiave2->next;
				chiave2=a->next;
			}
			
		}
	}
	else
	{
		cout<<"La coda e' vuota"<<endl;
	}
}
main()
{
	int n;
	do
	{
		insert();
		cout<<"Se vuoi continuare l'inserimento digita 1 ";
		cin>>n;
	}while(n==1);
	visualizza();
	do
	{
		remove();
		cout<<"Se vuoi continuare l'estrazione digita 1 ";
		cin>>n;
	}while(n==1);
	visualizza();
	if(testa==NULL)
	{
		cout<<"La coda e' vuota"<<endl;
	}
	else
	{
		cout<<"La coda non e' vuota";
	}
	cambio();
	visualizza2();
	cambio2();
	visualizza();
}
