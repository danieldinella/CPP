//visualizza gli atleti il cui cognome inizia con una lettera forniuta in input
#include<iostream>
#include<string.h>
using namespace std;
struct elemento
{
	string n;
	int t;
	elemento *next;
};
elemento *testa=NULL;
elemento *coda=NULL;
void insert()
{
	int j;
	cout<<"Inserisci il numero di atleti e premi invio ";
	cin>>j;
	for(int i=0;i<j;i++)
	{
		elemento *chiave;
		chiave=new(elemento);
		cout<<"Inserisci il cognome dell'atleta in ordine di arrivo e premi invio ";
		cin>>chiave->n;
		cout<<"Inserisci il tempo impiegato a terminare la gara in minuti e premi invio ";
		cin>>chiave->t;
		chiave->next=NULL;
		if(testa!=NULL)
		{
			coda->next=chiave;
			coda=chiave;
		}
		else
		{
			testa=chiave;
			coda=chiave;
		}
	}
}	
void podio()
{
	elemento *chiave=testa;
	for(int i=1;i<4&&chiave!=NULL;i++)
	{
		cout<<i<<"\t"<<chiave->n<<endl;
		chiave=chiave->next;
	}
}
void tempo()
{
	int i=1;
	elemento *chiave=testa;
	while(chiave!=NULL)
	{
		if(chiave->t>10)
		{
			cout<<i<<"\t"<<chiave->n<<endl;
			i++;
		}
		chiave=chiave->next;
	}
}
void cognome()
{
	char x;
	cout<<"Inserisci un inziale di un cognome e premi invio ";
	cin>>x;
	int i=1;
	elemento *chiave=testa;
	cout<<"Gli atleti i quali cognomi inizano con la lettera "<<x<<" sono:\n";
	while(chiave!=NULL)
	{
		if(x==chiave->n[0])
		{
			cout<<i<<"\t"<<chiave->n<<endl;
			i++;
		}
		chiave=chiave->next;
	}
}
main()
{
	insert();
	cout<<"Il podio e'\n";
	podio();
	cout<<"Gli atleti che hanno superato i dieci minuti per terminare la gara sono:\n";
	tempo();
	cognome();
}
