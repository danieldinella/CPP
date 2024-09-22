//PUNTATORI E FUNZIONI
#include<iostream>
using namespace std;
void scambio(int *pa,int *pb)
{
	int app;
	app=*pa;
	*pa=*pb;
	*pb=app;
}
main()
{
	int x=7, y=5;
	int *px, *py;
	px=&x;
	py=&y;
	cout<<*px<<" "<<*py<<endl;
	scambio(px,py);
	cout<<*px<<" "<<*py;
}
