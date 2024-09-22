//ESERCIZIO N 16
#include<iostream>
using namespace std;
struct elemento
{
	int n;
	elemento *next;
};
elemento *testa=NULL, *testa2=NULL, *testa3=NULL;
void push(int x)
{
	elemento *chiave;
	chiave=new(elemento);
	chiave->n=x;
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
void push2(int x)
{
	elemento *chiave;
	chiave=new(elemento);
	chiave->n=x;
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
}
void visualizza()
{
	elemento *chiave=testa3;
	int i=0;
	cout<<"\n num\t nominativo\n";
	while(chiave!=NULL)
	{
		cout<<i++<<"\t";
		cout<<chiave->n<<endl;
		chiave=chiave->next;
	}
}
void p3()
{
	elemento *chiave, *chiave2;
	while(testa=NULL)
	{
		chiave=new(elemento);
		chiave=testa;
		if(testa3!=NULL)
		{
			chiave->next=testa3;
			testa3=chiave;
		}
		else
		{
			testa3=chiave;
		}
		chiave=testa2;
		if(testa3!=NULL)
		{
			chiave->next=testa3;
			testa3=chiave;
		}
		else
		{
			testa3=chiave;
		}
		testa=testa->next;
		testa2=testa2->next;
	}
}
main()
{
	int a;
	a=6;
	push(a);
	a=4;
	push(a);
	a=2;
	push(a);
	a=0;
	push(a);
	a=7;
	push2(a);
	a=5;
	push2(a);
	a=3;
	push2(a);
	a=1;
	push2(a);
	p3();
	visualizza();
}
