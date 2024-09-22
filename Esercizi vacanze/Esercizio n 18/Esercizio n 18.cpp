//ESERCIZIO N 18
#include<iostream>
#include<string.h>
using namespace std;
struct elemento
{
	string n;
	float h;
	elemento *next;
};
elemento *testa=NULL;
void push()
{
	elemento *chiave;
	chiave=new(elemento);
	cout<<"Inserisci un nome e premi invio ";
	cin>>chiave->n;
	cout<<"Inserisci l'altezza e premi invio ";
	cin>>chiave->h;
	chiave->next=NULL;
	if(testa!=NULL)
	{
		if(chiave->h>testa->h)
		{
			chiave->next=testa;
			testa=chiave;
		}
		else
		{
			chiave->next=testa->next;
			testa->next=chiave;
		}
	}
	else
	{
		testa=chiave;
	}
}
void pop()
{
	elemento *chiave;
	if(testa!=NULL)
	{
		chiave=testa;
		testa=testa->next;
		cout<<chiave->n<<endl;
		delete(chiave);
	}
	else
	{
		cout<<"La pila è vuota";
	}
}
void visualizza()
{
	elemento *chiave=testa;
	int i=0;
	cout<<"\nnum\t nominativo\n";
	while(chiave!=NULL)
	{
		cout<<i++<<"\t";
		cout<<chiave->n<<endl;
		chiave=chiave->next;
	}
}
main()
{
	int a;
	do
	{
		cout<<"Inserisci:"<<endl<<"1.Inserire elemento"<<endl<<"2.Estrarre elemento"<<endl<<"3.Visualizzare"<<endl<<"4.Fine"<<endl;
		cin>>a;
		switch(a)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				visualizza();
				break;
			default:
				cout<<"Fine";
		};
	}while(a!=4);
}
