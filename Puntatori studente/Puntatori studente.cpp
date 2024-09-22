#include<iostream>
#include<iostream>
using namespace std;
struct studente
{
	string nome;
	string cognome;
	int eta;
};
studente key[5];
studente *p=key;
main()
{
	int i,j;
	studente app;
	for(i=0;i<5;i++)
	{
		cout<<"Inserisci il nome e premi invio ";
		cin>>(p+i)->nome;
		cout<<"Inserisci il cognome e premi invio ";
		cin>>(p+i)->cognome;
		cout<<"Inserisci l'eta' e premi invio ";
		cin>>(p+i)->eta;
	}
	cout<<endl<<"Nome"<<"\t"<<"Cognome"<<"\t"<<"Eta'"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<(p+i)->nome<<"\t";
		cout<<(p+i)->cognome<<"\t";
		cout<<(p+i)->eta<<endl;
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if((p+i)->eta>(p+j)->eta)
			{
				app=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=app;
			}
		}
	}
	cout<<endl<<"Nome"<<"\t"<<"Cognome"<<"\t"<<"Eta'"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<(p+i)->nome<<"\t";
		cout<<(p+i)->cognome<<"\t";
		cout<<(p+i)->eta<<endl;
	}
}
