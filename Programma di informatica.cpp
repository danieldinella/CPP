//SRUTTURA DI UN PROGRAMMA IN C++
#include<iostream> //libreria
using namespace std; //fare riferimento alla libreria standard
int a, b, c; //dichiarazione variabili;
main()
{
	cin>>a>>b; //input
	c=a+b; //istruzioni
	cout<<c; //output
}

//TIPI FONDAMENTALI DI VARIABILI IN C++
int //intero
float double //reali
bool //booleana
char //carattere
string //stringa

//PRINCIPALI OPERATORI (LOGICI, ARITMETICI, DI CONFRONTO)
> < >= <= != == //di confronto
&& || ! //logici
+ - * / % //aritmetici

//DICHIARAZIONE DEI DATI IN C++
int a //tipo dato, identificatore

//ISTRUZIONI DI I/O
cin>>... //input
cout<<... //output

//STRUTTURA DI SEQUENZA
{
	//input
	//istruzioni
	//output
}

//ASSEGNAZIONE IN C++
...=... //la prima variabile o costante prenderà il valore dopo l'uguale

//STRUTTURA DI SELEZIONE AD UNA VIA
if(...) //condizione
{
	//istruzioni
}

//STRUTTURA DI SELEZIONE A DUE VIE
if(...) //condizione
{
	//istruzioni
}
else //oppure
{
	//istruzioni
}

//SELEZIONE IN CASCATA
if(...) //condizione
{
	//istruzioni
}
else //oppure
{
	if(...) //condizione
	{
		//istruzioni
	}
	else //oppure
	{
		//istruzioni
	}
}

//SELEZIONE MULTIPLA (SWITCH)
switch(numero)
{
	case 1:
		//istruzioni
		break; //impedisce alle istruzioni seguenti di essere eseguite
	case 2:
		//istruzioni
		break;
	default; //si eseguono queste istruzioni se il numero non appartiene ai precedenti
		//istruzioni	
}

//ITERAZIONE PRECONDIZIONALE (WHILE)
while(...) //fintanto che la condizione è vera esegui le istruzioni
{
	//istruzioni
}

//ITERAZIONE POSTCONDIZIONALE (DO-WHILE)
do //fai le istruzioni
{
	//istruzioni
}while(...) //fintanto che la condizione è vera

//IL CICLO FOR
for(inzializzazione espressione; condizione espressione; loop espressione)
{
	//istruzioni
}

//CARICAMENTO VETTORE
for(i=0;i<dim;i++)
{
	cin>>v[i];
}

//VISUALIZZAZIONE VETTORE
for(i=0;i<dim;i++)
{
	cout<<v[i];
}

//ELIMINARE E AGGIUNGERE ELEMENTI IN UN VETTORE (SHIFT)
//A SINISTRA
for(i=0;i<dim-1;i++)
{
	v[i]=v[i+1];
}
//A DESTRA
for(i=dim-1;i>0;i--)
{
	v[i]=v[i-1];
}

//ROTAZIONE VETTORE
//A SINISTRA
app=v[0];
for(i=0;i<dim-1;i++)
{
	v[i]=v[i+1];
}
v[dim-1]=app;
//A DESTRA
app=v[dim-1];
for(i=dim-1;i>0;i--)
{
	v[i]=v[i-1];
}
v[0]=app;

//ORDINAMENTO VETTORE
for(i=0;i<dim-1;i++)
{
	for(j=i+1;j<dim;j++)
	{
		if(v[i]>v[j])
		{
			app=v[i];
			v[i]=v[j];
			v[j]=app;
		}
	}
}

//RICERCA VETTORE
j=0;
for(i=0;i<dim;i++)
{
	if(v[i]==x)
	{
		j++;
	}
}

//CARICAMENTO MATRICE
for(i=0;i<dimi;i++)
{
	for(j=0;j<dimj;j++)
	{
		cin>>m[i][j];
	}
}

//VISUALIZZAZIONE MATRICE
for(i=0;i<dimi;i++)
{
	for(j=0;j<dimj;j++)
	{
		cout<<m[i][j];
	}
}

//RICERCA MATRICE
z=0;
for(i=0;i<dimi;i++)
{
	for(j=0;j<dimj;j++)
	{
		if(m[i][j]==x)
		{
			z++;
		}
	}
}

//MATRICE TRASPOSTA
for(i=0;i<dimi;i++)
{
	for(j=0;j<dimj;j++)
	{
		n[j][i]=m[i][j];
	}
}

//VETTORI DI RECORD-LE TABELLE
struct a
{
	int b;
	float c;
};
a key[dim];

//CARRICAMENTO DI DATI IN UNA TABELLA
for(i=0;i<dim;i++)
{
	cin>>key[i].b;
	cin>>key[i].c;
}

//VISUALIZZAZIONE DEI DATI DI UNA TABELLA
for(i=0;i<dim;i++)
{
	cout<<key[i].b;
	cout<<key[i].c;
}

//ELIMINARE ED AGGIUNGERE ELEMENTI IN UNA TABELLA (SHIFT)
//A SINISTRA
for(i=0;i<dim-1;i++)
{
	key[i].b=key[i+1].b;
	key[i].c=key[i+1].c;
}
//A DESTRA
for(i=dim-1;i>0;i--)
{
	key[i].b=key[i-1].b;
	key[i].c=key[i-1].c;
}

//ORDINAMENTO DI UNA TABELLA
for(i=0;i<dim-1;i++)
{
	for(j=i+1;j<dim;j++)
	{
		if(key[i].b>key[j].b)
		{
			app=key[i].b;
			key[i].b=key[j].b;
			key[j].b=app;
		}
		if(key[i].c>key[j].c)
		{
			app=key[i].c;
			key[i].c=key[j].c;
			key[j].c=app;
		}		
	}
}
