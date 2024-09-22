//ESERCIZIO N 22
#include<iostream>
using namespace std;
struct nodo
{
	int n;
	nodo *next;
};
nodo *testa=NULL;
nodo *coda=NULL;
void insert(int x)
{
	nodo *chiave;
	chiave=new(nodo);
	chiave->n=x;
	chiave->next=NULL;
	if(testa!=NULL)
	{
		coda->next=chiave;
		coda=coda->next;
	}
	else
	{
		testa=chiave;
		coda=testa;
	}
}
void visualizza()
{
	nodo *chiave;
	chiave=testa;
	int i=0;
	while(chiave!=NULL)
	{
		cout<<i++<<"\t"<<chiave->n<<endl;
		chiave=chiave->next;
	}
}
main()
{
	int n, i;
	for(i=2;i<23;i++)
	{
		n=i*3;
		insert(n);
	}
	visualizza();
}
