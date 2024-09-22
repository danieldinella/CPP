//PUNTATORI CONSTANTI
#include<iostream>
using namespace std;
main()
{
	int a=5;
	const int *pa;
	pa=&a;
	cout<<a<<endl;
	cout<<pa;
	a=3;
	cout<<a;
}
