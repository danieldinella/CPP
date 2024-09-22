//ESERCIZIO N 32
#include<iostream>
using namespace std;
struct nodo
{
	int n;
	nodo *next;
};
nodo *testa=NULL,*coda=NULL, *testa2=NULL,*coda2=NULL;
int mas;
void insert()
{
	nodo *chiave, *chiave2;
	chiave=new(nodo);
	cout<<"Inserire articolo per la prima coda: ";
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
	chiave2=new(nodo);
	cout<<"Inserire articolo per la seconda coda: ";
	cin>>chiave2->n;
	chiave2->next=NULL;
	if(testa2!=NULL)
	{
		if(chiave->n>mas)
		{
			mas=chiave->n;
		}
		coda2->next=chiave2;
		coda2=coda2->next;
	}
	else
	{
		mas=chiave->n;
		testa2=chiave2;
		coda2=testa2;
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
	nodo *chiave2;
	chiave2=testa2;
	i=0;
	while(chiave2!=NULL)
	{
		cout<<i++<<"\t"<<chiave2->n<<endl;
		chiave2=chiave2->next;
	}
}
void remove()
{
	nodo *chiave, *chiave2;
	if(testa!=NULL)
	{
		chiave=testa;
		testa=testa->next;
		cout<<"Evaso ordine:__art della coda 1: "<<chiave->n<<endl;
		delete(chiave);
	}
	else
	{
		cout<<"ATTENZIONE: Lista 1 vuota operazione di evasione non consentita"<<endl;
	}
	if(testa2!=NULL)
	{
		chiave2=testa2;
		testa2=testa2->next;
		cout<<"Evaso ordine:__art della coda 2: "<<chiave2->n<<endl;
		delete(chiave2);
	}
	else
	{
		cout<<"ATTENZIONE: Lista 2 vuota operazione di evasione non consentita"<<endl;
	}
}
void mass()
{
	int i=0;
	nodo *chiave=testa;
	while(chiave!=NULL)
	{
		if(chiave->n>mas)
		{
			i++;
		}
		chiave=chiave->next;
	}
	cout<<"Gli elementi della pila 1 maggiori del massimo della pila 2 sono "<<i<<endl;
}
main()
{
	int n;
	do
	{
		cout<<"Inserisci:"<<endl<<"1.Per inserire un articolo alla coda"<<endl<<"2.Per visualizzare lo stato della coda"<<endl<<"3.Per rimuovere un articolo dalla coda"<<endl<<"4.Per calcolare il numero di valori della coda 1 maggiori del massimo della coda 2"<<endl<<"5.Fine"<<endl;
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
				mass();
				break;
			default:
				cout<<"Fine"<<endl;
		}
	}while(n!=5);
}
