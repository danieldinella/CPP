#include<iostream>
#include"masmin.h"
using namespace std;
main()
{
	masmin m;
	int x,y,z,mas,mino;
	cout<<"Inserisci x e premi invio ";
	cin>>x;
	cout<<"Inserisci y e premi invio ";
	cin>>y;
	cout<<"Inserisci z e premi invio ";
	cin>>z;
	m.set_abc(x,y,z);
	m.masmino(mas,mino);
	cout<<"Il massimo e' "<<mas<<endl;
	cout<<"Il minimo e' "<<mino;
}
