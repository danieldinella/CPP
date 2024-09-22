#include <iostream>
#include <string>
#include "studenti.h"
using namespace std;
main()
{
	int scelta;
	studenti a("Mario","Rossi");
	do
	{
		cout<<"Inserisci:"<<endl;
		cout<<"1.Per mettere i voti"<<endl;
		cout<<"2.Per visualizzare i voti"<<endl;
		cout<<"3.Per visualizzare la media dei voti"<<endl;
		cout<<"0.Fine"<<endl;
		cin>>scelta;
		switch(scelta)
		{
			case 1:
				cout<<"Inserisci i voti"<<endl;
				a.inserimento();
				break;
			case 2:
				a.visualizzazione();
				cout<<endl;
				break;
			case 3:
				cout<<"La media dei voti e':";
				cout<<a.media()<<endl;
				break;
			case 0:
				return 0;
		}
	}while(scelta!=0);
}
