#include <iostream>
#include "televisione.h"
using namespace std;
main()
{
	bool a,m;
	int v,c,x;
	cout<<"Inserisci 1 se la televisione e' accesa altrimenti un qualsiasi altro numero e premi invio ";
	cin>>x;
	if(x==1)
	{
		a=true;
	}
	else
	{
		a=false;
	}
	cout<<"Inserisci 1 se il muto e' attivato altrimenti un qualsiasi altro numero e premi invio ";
	cin>>x;
	if(x==1)
	{
		m=true;
	}
	else
	{
		m=false;
	}
	do
	{
		cout<<"Inserisci il volume (compreso tra 0 e 10) e premi invio ";
		cin>>v;
		if(v<0||v>10)
		{
			cout<<"Volume non accettabile"<<endl;
		}
	}while(v<0||v>10);
	do
	{
		cout<<"Inserisci il canale (compreso tra 0 e 99) e premi invio ";
		cin>>c;
		if(c<0||c>99)
		{
			cout<<"Canale non accettabile"<<endl;
		}
	}while(c<0||c>99);
	televisione t(a,m,v,c);
	do
	{
		cout<<"Inserisci:"<<endl<<"1.Per premere il pulsante rosso"<<endl<<"2.Per vedere il canale successivo"<<endl<<"3.Per vedere il canale precedente";
		cout<<endl<<"4.Per aumentare il volume"<<endl<<"5.Per abbassare il volume"<<endl<<"6.Per impostare il canale"<<endl<<"7.Per impostare il silenzioso";
		cout<<endl<<"8.Per stampare lo stato della televisione"<<endl<<"9.Fine"<<endl;
		cin>>x;
		switch(x)
		{
			case 1:
				t.pulsanterosso();
				break;
			case 2:
				t.canaleSuccessivo();
				break;
			case 3:
				t.canalePrecedente();
				break;
			case 4:
				t.aumentaVolume();
				break;
			case 5:
				t.abbassaVolume();
				break;
		}
	}
}
