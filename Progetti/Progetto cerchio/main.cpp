#include <iostream>
#include "cerchio.h"
using namespace std;
main()
{
	cerchio c(3); //istanzio un oggetto di raggio 3
	cout<<c.area()<<endl;
	cout<<c.lunghezza();
}
