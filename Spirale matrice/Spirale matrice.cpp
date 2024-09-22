//MATRICE SPIRALE
#include<iostream>
using namespace std;
int m[5][5],v[25];
void spirale (int v[],int m[][5],int x, int &i, int &j, int&s)
{
	int z;
	for(z=0;z<x;z++)
	{
		i++;
		v[s]=m[i][j];
		s++;
	}
	for(z=0;z<x;z++)
	{
		j++;
		v[s]=m[i][j];
		s++;
	}
	for(z=0;z<x;z++)
	{
		i--;
		v[s]=m[i][j];
		s++;
	}
	for(z=0;z<x;z++)
	{
		j--;
		v[s]=m[i][j];
		s++;
	}
}
main()
{
	int i,j,x,s,z;
	cout<<"Inserisci i valori della matrice"<<endl;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>m[i][j];
		}
	}
	v[0]=m[2][2];
	s=1;
	i=1;
	j=1;
	x=2;
	for(z=0;z<2;z++)
	{
		spirale(v,m,x,i,j,s);
		j--;
		x=x+2;
	}
	cout<<"I valori a spirale sono"<<endl;
	for(i=0;i<25;i++)
	{
		cout<<v[i]<<endl;
	}
}
