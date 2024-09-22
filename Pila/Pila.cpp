//PILA
#include<iostream>
#include<string.h>
using namespace std;
struct elemento
{
	string nome;
	elemento *next;
};
elemento *testa=NULL;
void push()
{
	elemento *chiave;
	chiave=new(elemento);
	cout<<"Inserisci un nome e premi invio ";
	cin>>chiave->nome;
	chiave->next=NULL;
	if(testa!=NULL)
	{
		chiave->next=testa;
		testa=chiave;
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
		cout<<"Ho estratto il nome: "<<chiave->nome<<endl;
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
	cout<<"\n"<<"num"<<"\t"<<"nominativo"<<"\n";
	while(chiave!=NULL)
	{
		cout<<i++<<"\t";
		cout<<chiave->nome<<endl;
		chiave=chiave->next;
	}
}
main()
{
	int n;
	do
	{
		cout<<"Inserisci:"<<endl<<"1.Inserire elemento"<<endl<<"2.Estrarre elemento"<<endl<<"3.Visualizzare"<<endl<<"4.Fine"<<endl;
		cin>>n;
		switch(n)
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
	}while(n!=4);
}
