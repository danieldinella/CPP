//ESERCIZIO N 17
#include<iostream>
using namespace std;
struct elemento
{
	int n;
	elemento *next;
};
elemento *testa=NULL,*testa2=NULL;
int mas;
void push()
{
	elemento *chiave;
	chiave=new(elemento);
	cout<<"Inserisci un numero per la pila 1 e premi invio ";
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
	elemento *chiave2;
	chiave=new(elemento);
	cout<<"Inserisci un numero per la pila 2 e premi invio ";
	cin>>chiave2->n;
	chiave2->next=NULL;
	if(testa2!=NULL)
	{
		if(chiave2->n>mas)
		{
			mas=chiave2->n;
		}
		chiave2->next=testa2;
		testa2=chiave2;
	}
	else
	{
		mas=chiave2->n;
		testa2=chiave2;
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
		cout<<"La pila 1 è vuota";
	}
	elemento *chiave2;
	if(testa2!=NULL)
	{
		chiave2=testa2;
		testa2=testa2->next;
		cout<<chiave2->n<<endl;
		delete(chiave2);
	}
	else
	{
		cout<<"La pila 2 è vuota";
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
	cout<<endl;
	elemento *chiave2=testa2;
	i=0;
	cout<<"\nnum\t nominativo\n";
	while(chiave2!=NULL)
	{
		cout<<i++<<"\t";
		cout<<chiave2->n<<endl;
		chiave=chiave2->next;
	}
}
void mass()
{
	int i=0;
	elemento *chiave=testa;
	while(chiave!=NULL)
	{
		if(chiave->n>mas)
		{
			i++;
		}
		chiave=chiave->next;
	}
	cout<<"Gli elementi della pila 1 maggiori del massimo della pila 2 sono "<<i<<endl;
}
main()
{
	int n;
	do
	{
		cout<<"Inserisci:"<<endl<<"1.Inserire elemento"<<endl<<"2.Estrarre elemento"<<endl;
		cout<<"3.Visualizzare"<<endl<<"4.Elementi di p1 maggiori del massimo di p2"<<endl<<"5.Fine"<<endl;
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
				mass();
				break;
			default:
				cout<<"Fine";
		};
	}while(n!=5);
}
