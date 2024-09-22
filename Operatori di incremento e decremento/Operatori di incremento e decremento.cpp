//OPERATORI DI INCREMENTO E DECREMENTO
#include<iostream>
using namespace std;
main()
{
	int i=7;
	int *pi;
	pi=&i;
	cout<<"Il valore della variabile e' "<<*pi<<endl;
	cout<<"L'indirizzo della variabile e' "<<pi<<endl;
	(*pi)++;
	cout<<"Il valore della variabile incrementata (*pi)++ e' "<<*pi<<endl;
	pi++;
	cout<<"Il valore dell'indirizzo incrementato (pi++) e' "<<pi<<endl;
	cout<<"*pi++="<<*pi++<<endl; //Problematico
	cout<<"*(pi++)="<<*(pi++); //Problematico
}
