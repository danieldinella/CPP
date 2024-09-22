//UNA PILA ME LA DEVI INVERTIRE 1.UILIZZI UNA STRUTTURA D'APPOGGIO 2.OPPURE SEMPRE SULLA STESSA
#include<iostream>
using namespace std;
struct elemento
{
	string nome;
	elemento *succ;
};
elemento *testa=NULL;
elemento *head=NULL;
elemento *key=NULL;
void app()
{
	key=testa;
	key->succ=NULL;
	if(head!=NULL)
	{
		key->succ=head;
		head=key;
	}
	else
	{
		head=key;
	}
	testa=testa->succ;
	int i=0;
	cout<<"\n"<<"num"<<"\t"<<"nominativo"<<"\n";
	key=head;
	while(key!=NULL)
	{
		cout<<i++<<"\t";
		cout<<key->nome<<endl;
		key=key->succ;
	}
}
void push()
{
	elemento *chiave;
	chiave=new(elemento);
	cout<<"Inserisci un nome e premi invio ";
	cin>>chiave->nome;
	chiave->succ=NULL;
	if(testa!=NULL)
	{
		chiave->succ=testa;
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
		testa=testa->succ;
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
		chiave=chiave->succ;
	}
}
main()
{
	int n;
	do
	{
		cout<<"Inserisci:"<<endl<<"1.Inverti la pila"<<endl<<"2.Inserire elemento"<<endl<<"3.Estrarre elemento"<<endl<<"4.Visualizzare"<<endl<<"5.Fine"<<endl;
		cin>>n;
		switch(n)
		{
			case 1:
				app();
				break;
			case 2:
				push();
				break;
			case 3:
				pop();
				break;
			case 4:
				visualizza();
				break;
			default:
				cout<<"Fine";
		};
	}while(n!=5);
}
