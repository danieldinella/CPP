#include <iostream>
#include "Triangolo.h"
using namespace std;
main()
{
	triangolo t;
	int n;
	float a,b,c;
	do
	{
		cout<<"Inserisci:"<<endl<<"1.Per calcolare il perimetro di un triangolo equilatero"<<endl<<"2.Per calcolare il perimetro di un triangolo isoscele"<<endl<<"3.Per calcolare il perimetro di un triangolo scaleno"<<endl;
		cin>>n;
		switch(n)
		{
			case 1:
				cout<<"Inserisci il lato e premi invio ";
				cin>>a;
				t.set_e(a);
				break;
			case 2:
				cout<<"Inserisci il lato e premi invio ";
				cin>>a;
				cout<<"Inserisci la base e premi invio ";
				cin>>b;
				t.set_i(a,b);
				break;
			case 3:
				cout<<"Inserisci il lato 1 e premi invio ";
				cin>>a;
				cout<<"Inserisci il lato 2 e premi invio ";
				cin>>b;
				cout<<"Inserisci il lato 3 e premi invio ";
				cin>>c;
				t.set_s(a,b,c);
				break;
			default:
				cout<<"Il numero inserito e' errato riprova"<<endl;
		}
	}while(n<1||n>3);
	cout<<"Il perimetro del triangolo e' "<<t.perimetro();
}
