//ESERCIZIO N 15
#include<iostream>
using namespace std;
struct elemento
{
	int n;
	elemento *next;
};
elemento *testa=NULL;
void push()
{
	elemento *chiave;
	chiave=new(elemento);
	cout<<"Inserisci un numero e premi invio ";
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
void ordina()
{
	int i=-1, v[10], x, j, app;
	elemento *chiave=testa;
	while(chiave!=NULL)
	{
		i++;
		v[i]=chiave->n;
		chiave=chiave->next;
	}
	for(x=0;x<i;x++)
	{
		for(j=x+1;j<=i;j++)
		{
			if(v[x]>v[j])
			{
				app=v[x];
				v[x]=v[j];
				v[j]=app;
			}
		}
	}
	chiave=testa;
	while(chiave!=NULL)
	{
		chiave->n=v[i];
		i--;
		chiave=chiave->next;
	}
}
main()
{
	int n;
	do
	{
		cout<<"Inserisci:"<<endl<<"1.Inserire elemento"<<endl<<"2.Estrarre elemento"<<endl;
		cout<<"3.Visualizzare"<<endl<<"4.Ordina"<<endl<<"5.Fine"<<endl;
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
				ordina();
				break;
			default:
				cout<<"Fine";
		};
	}while(n!=5);
}
