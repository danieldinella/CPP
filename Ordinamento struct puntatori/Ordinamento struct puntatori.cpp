//CARICARE UNA STRUCT PERSONA: NOME E PESO; ORDINARE IN ORDINE ALFABETICO
#include<iostream>
#include<string.h>
using namespace std;
main()
{
	int i, j;
	struct persona
	{
		string nome;
		float peso;
	};
	persona key[5]; 
	persona app;
	persona *p;
	p=key;
	for(i=0;i<5;i++)
	{
		cout<<"Inserici il nome e premi invio ";
		cin>>(p+i)->nome;
		cout<<"Inserisci il peso e premi invio ";
		cin>>(p+i)->peso;
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if((p+i)->nome>(p+j)->nome)
			{
				app=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=app;
			}
		}
	}
	cout<<"La struct ordinata in ordine alfabetico e':"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<(p+i)->nome<<" ";
		cout<<(p+i)->peso<<endl;
	}
}
