//CODA NUMERI PRIMI
#include<iostream>
using namespace std;
struct nodo
{
	int num;
	nodo *next;
};
nodo *testa=NULL;
nodo *coda=NULL;
int a=0,k,j=0;
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
void primo()
{
	nodo *chiave=testa;
	while(chiave!=NULL)
	{
		k=2;
		while(k<chiave->num)
		{
			if(chiave->num%k==0)
			{
				j++;
			}
			k++;
		}
		if(j==0)
		{
			a++;
			j=0;
		}
		chiave=chiave->next;
	}
	cout<<"La quantita' di numeri primi nella coda e' "<<a<<endl;
}
main()
{
	int n;
	do
	{
		cout<<"Inserisci:"<<endl<<"1.Per inserire un articolo alla coda"<<endl<<"2.Per visualizzare lo stato della coda";
		cout<<endl<<"3.Per rimuovere un articolo dalla coda"<<endl<<"4.Per calcolare la quantita' di numeri primi nella coda";
		cout<<endl<<"5.Fine"<<endl;
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
				primo();
				break;
			default:
				cout<<"Fine";
		}
	}while(n!=5);
}
