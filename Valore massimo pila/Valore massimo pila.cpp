//PILA VALORE MASSIMO
#include<iostream>
using namespace std;
struct elemento
{
	int num;
	elemento *next;
};
elemento *testa=NULL;
int a;
void push()
{
	elemento *chiave;
	chiave=new(elemento);
	cout<<"Inserisci un numero e premi invio ";
	cin>>chiave->num;
	chiave->next=NULL;
	if(testa!=NULL)
	{
		if(a<chiave->num)
		{
			a=chiave->num;
		}		
		chiave->next=testa;
		testa=chiave;
	}
	else
	{
		a=chiave->num;
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
		cout<<chiave->num<<endl;
		delete(chiave);
		chiave=testa;
		elemento *chiave=NULL;
		a=testa->num;
		while(chiave!=NULL)
		{
			chiave=chiave->next;
			if(a<chiave->num)
			{
				a=chiave->num;
			}
		}
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
	cout<<"\n num\t nominativo\n";
	while(chiave!=NULL)
	{
		cout<<i++<<"\t";
		cout<<chiave->num<<endl;
		chiave=chiave->next;
	}
}
main()
{
	int n;
	do
	{
		cout<<"Inserisci:"<<endl<<"1.Inserire elemento"<<endl<<"2.Estrarre elemento"<<endl<<"3.Visualizzare"<<endl<<"4.Valore massimo pila"<<endl<<"5.Fine"<<endl;
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
			case 4:
				cout<<"Il valore massimo della pila e' "<<a<<endl;
				break;
			default:
				cout<<"Fine";
		};
	}while(n!=5);
}
