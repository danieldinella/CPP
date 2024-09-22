//ESERCIZIO N 2
#include<iostream>
using namespace std;
struct elemento
{
	int n;
	elemento *next;
};
elemento *testa=NULL;
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
void pop()
{
	elemento *chiave;
	if(testa!=NULL)
	{
		chiave=testa;
		testa=testa->next;
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
		cout<<chiave->n<<endl;
		chiave=chiave->next;
	}
}
main()
{
	int a;
	a=3;
	push(a);
	a=12;
	push(a);
	a=4;
	push(a);
	a=23;
	push(a);
	a=6;
	push(a);
	pop();
	pop();
	visualizza();
	a=34;
	push(a);
	visualizza();
}
