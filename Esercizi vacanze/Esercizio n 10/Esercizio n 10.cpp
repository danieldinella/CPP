//ESERCIZIO N 10
#include<iostream>
using namespace std;
struct elemento
{
	int n;
	elemento *next;
};
elemento *testa=NULL;
int mas, mino;
void push()
{
	elemento *chiave;
	chiave=new(elemento);
	cout<<"Inserisci un numero e premi invio ";
	cin>>chiave->n;
	chiave->next=NULL;
	if(testa!=NULL)
	{
		if(chiave->n>mas)
		{
			mas=chiave->n;
		}
		if(chiave->n<mino)
		{
			mino=chiave->n;
		}
		chiave->next=testa;
		testa=chiave;
	}
	else
	{
		mas=chiave->n;
		mino=chiave->n;
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
main()
{
	int n;
	do
	{
		cout<<"Inserisci:"<<endl<<"1.Inserire elemento"<<endl<<"2.Estrarre elemento"<<endl;
		cout<<"3.Visualizzare"<<endl<<"4.Massimo"<<endl<<"5.Minimo"<<endl<<"6.Fine"<<endl;
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
				cout<<"Il valore massimo della pila e' "<<mas<<endl;
				break;
			case 5:
				cout<<"Il valore minimo della pila e' "<<mino<<endl;
				break;
			default:
				cout<<"Fine";
		};
	}while(n!=6);
}
