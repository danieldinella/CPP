//ESERCIZIO N 30
#include<iostream>
using namespace std;
struct nodo
{
	int n;
	nodo *next;
};
nodo *testa=NULL,*coda=NULL,*testa2=NULL,*coda2=NULL,*testa3=NULL,*coda3=NULL;
void insert()
{
	nodo *chiave, *chiave2;
	chiave=new(nodo);
	cout<<"Inserire articolo per la prima coda: ";
	cin>>chiave->n;
	chiave->next=NULL;
	if(testa!=NULL)
	{
		coda->next=chiave;
		coda=coda->next;
	}
	else
	{
		testa=chiave;
		coda=testa;
	}
	chiave2=new(nodo);
	cout<<"Inserire articolo per la seconda coda: ";
	cin>>chiave2->n;
	chiave2->next=NULL;
	if(testa2!=NULL)
	{
		coda2->next=chiave2;
		coda2=coda2->next;
	}
	else
	{
		testa2=chiave2;
		coda2=testa2;
	}
}
void visualizza()
{
	nodo *chiave, *chiave2;
	chiave=testa;
	int i=0;
	while(chiave!=NULL)
	{
		cout<<i++<<"\t"<<chiave->n<<endl;
		chiave=chiave->next;
	}
	chiave2=testa2;
	i=0;
	while(chiave2!=NULL)
	{
		cout<<i++<<"\t"<<chiave2->n<<endl;
		chiave2=chiave2->next;
	}
}
void remove()
{
	nodo *chiave, *chiave2;
	if(testa!=NULL)
	{
		chiave=testa;
		testa=testa->next;
		cout<<"Evaso ordine:__art: "<<chiave->n<<"della coda 1"<<endl;
		delete(chiave);
	}
	else
	{
		cout<<"ATTENZIONE: Lista 1 vuota operazione di evasione non consentita"<<endl;
	}
	if(testa2!=NULL)
	{
		chiave2=testa2;
		testa2=testa2->next;
		cout<<"Evaso ordine:__art: "<<chiave2->n<<"della coda 2"<<endl;
		delete(chiave2);
	}
	else
	{
		cout<<"ATTENZIONE: Lista 2 vuota operazione di evasione non consentita"<<endl;
	}
}
void fusione()
{
	int i=-1, v[10], v2[10], x, j, b, c, app;
	nodo *chiave=testa, *chiave2=testa2, *chiave3;
	while(chiave!=NULL)
	{
		i++;
		v[i]=chiave->n;
		chiave=chiave->next;
	}
	for(x=0;x<i;x++)
	{
		for(j=x+1;j<=i;j++)
		{
			if(v[x]>v[j])
			{
				app=v[x];
				v[x]=v[j];
				v[j]=app;
			}
		}
	}
	i=-1;
	while(chiave2!=NULL)
	{
		i++;
		v2[i]=chiave2->n;
		chiave2=chiave2->next;
	}
	for(b=0;b<i;b++)
	{
		for(c=b+1;c<=i;c++)
		{
			if(v2[b]>v[c])
			{
				app=v2[b];
				v2[b]=v2[c];
				v2[c]=app;
			}
		}
	}
	while(i>=0)
	{
		chiave3->n=v[i];
		chiave->next=NULL;
		if(testa3!=NULL)
		{
			coda3->next=chiave3;
			coda3=coda3->next;
		}
		else
		{
			testa3=chiave3;
			coda3=testa3;
		}
		chiave3->n=v2[i];
		chiave->next=NULL;
		if(testa3!=NULL)
		{
			coda3->next=chiave3;
			coda3=coda3->next;
		}
		else
		{
			testa3=chiave3;
			coda3=testa3;
		}
		i--;
	}
	chiave3=testa3;
	int s=0;
	while(chiave3!=NULL)
	{
		cout<<i++<<"\t"<<chiave3->n<<endl;
		chiave3=chiave3->next;
	}
}
main()
{
	int n;
	do
	{
		cout<<"Inserisci:"<<endl<<"1.Per inserire un articolo alla coda"<<endl<<"2.Per visualizzare lo stato della coda"<<endl<<"3.Per rimuovere un articolo dalla coda"<<endl<<"4.Per unire le due code"<<endl<<"5.Fine"<<endl;
		cin>>n;
		switch(n)
		{
			case 1:
				insert();
				break;
			case 2:
				visualizza();
				break;
			case 3:
				remove();
				break;
			case 4:
				fusione();
				break;
			default:
				cout<<"Fine"<<endl;
		}
	}while(n!=5);
}
