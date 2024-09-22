//FUNZIONE RETTANGOLO
#include<iostream>
using namespace std;
int area(float b1,float b2,float h1,float h2)
{
	float a1,a2;
	int x;
	a1=b1*h1;
	a2=b2*h2;
	if(a1>a2)
	{
		x=1;
	}
	else
	{
		if(a1==a2)
		{
			x=2;
		}
		else
		{
			x=3;
		}
	}
	return x;
}
main()
{
	float b1,b2,h1,h2;
	int x;
	cout<<"Inserisci la base 1 ";
	cin>>b1;
	cout<<"Inserisci la base 2 ";
	cin>>b2;
	cout<<"Inserisci l'altezza 1 ";
	cin>>h1;
	cout<<"Inserisci l'altezza 2 ";
	cin>>h2;
	x=area(b1,b2,h1,h2);
	if(x==1)
	{
		cout<<"La prima area e' piu' grande della seconda";
	}
	else
	{
		if(x==2)
		{
			cout<<"Le due aree sono uguali";
		}
		else
		{
			cout<<"La seconda area e' più grande della prima";
		}
	}
}
