//PILA
#include<iostream>
using namespace std;
struct elemento
{
	int n;
	elemento *next;
};
elemento *testa=NULL, *testa2=NULL;
void push()
{
	elemento *chiave;
	chiave=new(elemento);
	cout<<"Inserisci un nome e premi invio ";
	cin>>chiave->n;
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
void inverti()
{
	elemento *chiave;
	while(testa!=NULL)
	{
		chiave=testa;
		chiave->next=NULL;
		if(testa2!=NULL)
		{
			chiave->next=testa2;
			testa2=chiave;
		}
		else
		{
			testa2=chiave;
		}
		testa=testa->next;
	}
	chiave=testa2;
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
		cout<<"Inserisci:"<<endl<<"1.Inserire elemento"<<endl<<"2.Estrarre elemento"<<endl<<"3.Visualizzare"<<endl<<"4.Inverti pila"<<endl<<"5.Fine"<<endl;
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
			case 4:
				inverti();
				break;
			default:
				cout<<"Fine";
		};
	}while(a!=4);
}
