//PUNTATORE
#include<iostream>
using namespace std;
main()
{
	long *punt;
	long a=5;
	punt=&a;
	cout<<"Il valore della variabile a puntata dal puntatore punt e' ";
	cout<<*punt<<endl;
	cout<<"Modifico il valore della variabile puntata da punt ";
	*punt=3;
	cout<<a<<endl;
	cout<<"Viene stampato l'indirizzo della variabile a ossia l'indirizzo del puntatore ";
	cout<<punt;
}
