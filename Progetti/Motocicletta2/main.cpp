#include"motocicletta2.h"
using namespace std;
main()
{
	motore m1("ver123",1000);
	ruota r1(5,120);
	ruota r2(5,100);
	motocicletta2 moto1("suzuki","544",m1,r1,r2);
	moto1.mostrastato();
}
