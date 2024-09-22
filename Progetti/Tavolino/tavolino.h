#include <iostream>
#include <string>
#include "piede.h"
#include "piano.h"
using namespace std;
class tavolino
{
	public:
		piano b;
		piede p;
		int n;
		string color;
	public:
		tavolino(piano bb,piede pp,int nn,string c)
		{
			b=bb;
			p=pp;
			n=nn;
			color=c;
		}
		void stato()
		{
			cout<<b.altezza<<endl;
			cout<<b.raggio<<endl;
			cout<<p.altezza<<endl;
			cout<<p.raggio<<endl;
			cout<<n<<endl;
			cout<<color;
		}
};
