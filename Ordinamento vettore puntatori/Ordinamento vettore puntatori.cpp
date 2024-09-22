//CARICARE UN VETTORE E ORDINARE
#include<iostream>
using namespace std;
main()
{
	int v[5], i, j, app;
	int *p;
	p=v;
	cout<<"Inserisci i numeri e premi invio "<<endl;
	for(i=0;i<5;i++)
	{
		cin>>*(p+i);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(*(p+i)>*(p+j))
			{
				app=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=app;
			}
		}
	}
	cout<<"Il vettore ordinato in ordine crescente e': ";
	for(i=0;i<5;i++)
	{
		cout<<*(p+i)<<" ";
	}
}
