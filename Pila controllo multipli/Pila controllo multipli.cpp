//PILA CONTROLLO MULTIPLI
#include<iostream>
using namespace std;
struct elemento
{
	int multiplo;
	elemento *next;
};
elemento *testa=NULL;
int i=0;
void push()
{
    elemento *chiave;
	chiave=new(elemento);
	cout<<"Inserisci un multiplo di 3 e premi invio ";
    cin>>chiave->multiplo;
    if(chiave->multiplo%3==0)
    {
    	i++;
	}
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
		cout<<"Ho estratto il numero: "<<chiave->multiplo<<endl;
		if(chiave->multiplo%3==0)
		{
			i--;
		}
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
	int r=0;
	cout<<"\n"<<"num"<<"\t"<<"nominativo"<<"\n";
	while(chiave!=NULL)
	{
		cout<<r++<<"\t";
		cout<<chiave->multiplo<<endl;
		chiave=chiave->next;
	}
}
main()
{
    int n;
    do
	{
		cout<<"Inserisci:"<<endl<<"1.Inserire elemento"<<endl<<"2.Estrarre elemento"<<endl<<"3.Visualizzare il numero dei multipli di 3"<<endl<<"4.Visualizzare"<<endl<<"5.Fine"<<endl;
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
				cout<<i<<endl;
				break;
			case 4:
				visualizza();
				break;
			default:
				cout<<"Fine";
		};
	}while(n!=5);
}
