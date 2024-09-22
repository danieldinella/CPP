//ESERCIZIO N 8
#include<iostream>
using namespace std;
struct elemento
{
	int n;
	elemento *next;
};
elemento *testa=NULL;
void push(int a)
{
	elemento *chiave;
	chiave=new(elemento);
	chiave->n=a;
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
void visualizza()
{
	elemento *chiave=testa;
	int i=0;
	cout<<"num\tnominativo\n";
	while(chiave!=NULL)
	{
		cout<<i++<<"\t";
		cout<<chiave->n<<endl;
		chiave=chiave->next;
	}
}
main()
{
	int a, i;
	for(i=2;i<23;i++)
	{
		a=i*3;
		push(a);
	}
	visualizza();
}
