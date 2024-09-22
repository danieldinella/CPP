//TEMPO
#include <iostream>
#include <ctime>
using namespace std;
main()
{
	time_t currentTime;
	time(&currentTime);
	cout << asctime(localtime(&currentTime)) << endl;
}
