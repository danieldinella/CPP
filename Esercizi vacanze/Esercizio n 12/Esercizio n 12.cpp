//ESERCIZIO N 12
#include<iostream>
using namespace std;
struct elemento
{
	int num;
	elemento *next;
};
elemento *testa=NULL;
int i=0;
float a=0;
void push()
{
	elemento *chiave;
	chiave=new(elemento);
	cout<<"Inserisci un numero e premi invio ";
	cin>>chiave->num;
	a=chiave->num+a;
	i++;
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
		a=a-chiave->num;
		i--;
		testa=testa->next;
		cout<<chiave->num<<endl;
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
	cout<<"\n num\t nominativo\n";
	while(chiave!=NULL)
	{
		cout<<i++<<"\t";
		cout<<chiave->num<<endl;
		chiave=chiave->next;
	}
}
void media()
{
	int x=0, j=0;
	a=a/i;
	while(testa!=NULL)
	{
		if(testa->num>a)
		{
			x++;
		}
		else
		{
			if(testa->num<a)
			{
				j++;
			}
		}
		testa=testa->next;
	}
	cout<<"I valori maggiori della media sono "<<x<<" mentre i valori minori della media sono "<<j<<endl;
}
main()
{
	int n;
	do
	{
		cout<<"Inserisci:"<<endl<<"1.Inserire elemento"<<endl<<"2.Estrarre elemento"<<endl<<"3.Visualizzare"<<endl<<"4.Media pila"<<endl<<"5.Fine"<<endl;
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
				media();
				break;
			default:
				cout<<"Fine";
		};
	}while(n!=5);
}
