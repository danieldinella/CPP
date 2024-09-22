//VALORE MEDIO CODA
#include<iostream>
using namespace std;
struct nodo
{
	int num;
	nodo *next;
};
nodo *testa=NULL;
nodo *coda=NULL;
int i=0;
float a=0;
void insert()
{
	nodo *chiave=NULL;
	chiave=new(nodo);
	cout<<"Inserire numero: ";
	cin>>chiave->num;
	a=chiave->num+a;
	i++;
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
	int b=0;
	while(chiave!=NULL)
	{
		cout<<b++<<"\t"<<chiave->num<<endl;
		chiave=chiave->next;
	}
}
void remove()
{
	nodo *chiave=NULL;
	if(testa!=NULL)
	{
		chiave=testa;
		a=a-chiave->num;
		i--;
		testa=testa->next;
		cout<<"Evaso ordine:__num: "<<chiave->num<<endl;
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
		cout<<"Inserisci:"<<endl<<"1.Per inserire un articolo alla coda"<<endl<<"2.Per visualizzare lo stato della coda"<<endl<<"3.Per rimuovere un articolo dalla coda"<<endl<<"4.Per calcolare il valore medio della coda"<<endl<<"5.Fine"<<endl;
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
					cout<<"Il valore medio della coda e' "<<a/i<<endl;
				}
				else
				{
					cout<<"La coda e' vuota"<<endl;
				}
				break;
			default:
				cout<<"Fine";
		}
	}while(n!=5);
}
