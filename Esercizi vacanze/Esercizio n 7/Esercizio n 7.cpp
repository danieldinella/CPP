//ESERCIZIO N 7
#include<iostream>
using namespace std;
struct elemento
{
	int n;
	elemento *next;
};
elemento *testa=NULL, *testa2=NULL, *testa3=NULL;
void push()
{
	elemento *chiave, *chiave2;
	chiave=new(elemento);
	chiave2=new(elemento);
	cout<<"Inserisci un numero per la pila 1 e premi invio ";
	cin>>chiave->n;
	cout<<"Inserisci un numero per la pila 2 e premi invio ";
	cin>>chiave2->n;
	chiave->next=NULL;
	chiave2->next=NULL;
	if(testa!=NULL)
	{
		chiave->next=testa;
		testa=chiave;
	}
	else
	{
		testa=chiave;
	}
	if(testa2!=NULL)
	{
		chiave2->next=testa2;
		testa2=chiave2;
	}
	else
	{
		testa2=chiave2;
	}
}
void p3()
{
	elemento *chiave3;
	if(testa2->n%2==0)
	{
		while(testa!=NULL)
		{
			chiave3->n=testa->n;
			chiave3->next=NULL;
			if(testa3!=NULL)
			{
				chiave3->next=testa3;
				testa3=chiave3;
			}
			else
			{
				testa3=chiave3;
			}
			testa2=testa2->next;
			testa=testa->next;
		}
	}
}
void visualizza()
{
	elemento *chiave3=testa3;
	int i=0;
	cout<<"\n num\t nominativo\n";
	while(chiave3!=NULL)
	{
		cout<<i++<<"\t";
		cout<<chiave3->n<<endl;
		chiave3=chiave3->next;
	}
}
void visualizza1()
{
	elemento *chiave=testa;
	int i=0;
	cout<<"\n num\t nominativo\n";
	while(chiave!=NULL)
	{
		cout<<i++<<"\t";
		cout<<chiave->n<<endl;
		chiave=chiave->next;
	}
}
main()
{
	for(int i=0;i<5;i++)
	{
		push();
	}
	p3();
	visualizza();
}
