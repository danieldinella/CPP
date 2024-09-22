#include <iostream>
#include "punto.h"
using namespace std;
main()
{
	punto origine();
	punto io(1,9);
	double a;
	cout<<origine.distanza(io)<<endl;
	cout<<origine.simmetrico(io);
}
