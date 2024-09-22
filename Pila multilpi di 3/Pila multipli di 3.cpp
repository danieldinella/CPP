//PILA MULTIPLI DI 3
#include<iostream>
using namespace std;
struct elemento
{
	int multiplo;
	elemento *next;
};
elemento *testa=NULL;
void push()
{
    elemento *chiave;
	chiave=new(elemento);
	do
	{
        cout<<"Inserisci un multiplo di 3 e premi invio ";
        cin>>chiave->multiplo;
        if(chiave->multiplo%3!=0)
		{
            cout<<"Il numero inserito non e' un multiplo di 3"<<endl;
        }
	}while(chiave->multiplo%3!=0);
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
void visualizza()
{
	elemento *chiave=testa;
	int i=0;
	cout<<"\n"<<"num"<<"\t"<<"nominativo"<<"\n";
	while(chiave!=NULL)
	{
		cout<<i++<<"\t";
		cout<<chiave->multiplo<<endl;
		chiave=chiave->next;
	}
}
main()
{
    int n;
    do
	{
		cout<<"Inserisci:"<<endl<<"1.Inserire elemento"<<endl<<"2.Visualizzare"<<endl<<"3.Fine"<<endl;
		cin>>n;
		switch(n)
		{
			case 1:
				push();
				break;
			case 2:
				visualizza();
				break;
			default:
				cout<<"Fine";
		};
	}while(n!=3);
}
