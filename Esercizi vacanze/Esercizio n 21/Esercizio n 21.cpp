//ESERCIZIO N 21
#include<iostream>
using namespace std;
struct nodo
{
	int n;
	nodo *next;
};
nodo *testa=NULL;
nodo *coda=NULL;
nodo *testa2=NULL;
nodo *coda2=NULL;
nodo *testa3=NULL;
nodo *coda3=NULL;
void insert()
{
	nodo *chiave, *chiave2;
	chiave=new(nodo);
	cout<<"Inserire articolo pila 1: ";
	cin>>chiave->n;
	cout<<"Inserire articolo pila 2: ";
	cin>>chiave2->n;
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
	chiave2->next=NULL;
	if(testa2!=NULL)
	{
		coda2->next=chiave2;
		coda2=coda2->next;
	}
	else
	{
		testa2=chiave2;
		coda2=testa2;
	}
}
void visualizza()
{
	nodo *chiave;
	chiave=testa3;
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
	if(testa2!=NULL)
	{
		chiave=testa2;
		testa2=testa2->next;
		cout<<"Evaso ordine:__art: "<<chiave->n<<endl;
		delete(chiave);
	}
	else
	{
		cout<<"ATTENZIONE: Lista vuota operazione di evasione non consentita"<<endl;
	}
}
void p3()
{
	nodo *chiave;
	while(testa!=NULL)
	{
		chiave=testa;
		if(testa3!=NULL)
		{
			coda3->next=chiave;
			coda3=coda3->next;
		}
		else
		{
			testa3=chiave;
			coda3=testa3;
		}
		chiave=testa2;
		if(testa3!=NULL)
		{
			coda3->next=chiave;
			coda3=coda3->next;
		}
		else
		{
			testa3=chiave;
			coda3=testa3;
		}
		testa=testa->next;
		testa2=testa2->next;
		nodo *chiave2;
		chiave2=testa3;
		int i=0;
		while(chiave2!=NULL)
		{
			cout<<i++<<"\t"<<chiave2->n<<endl;
			chiave2=chiave2->next;
		}
	}
	testa3=NULL;
}
main()
{
	int n;
	do
	{
		cout<<"Inserisci:"<<endl<<"1.Per inserire un articolo alla coda"<<endl<<"2.Per visualizzare la terza coda"<<endl<<"3.Per rimuovere un articolo dalla coda"<<endl<<"4.Fine"<<endl;
		cin>>n;
		switch(n)
		{
			case 1:
				insert();
				break;
			case 2:
				p3();
				break;
			case 3:
				remove();
				break;
			default:
				cout<<"Fine";
		}
	}while(n!=4);
}
