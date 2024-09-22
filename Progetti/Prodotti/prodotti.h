#include<string.h>
using namespace std;
class prodotti
{
	private:
		string c,d;
		float p;
		int n;
	public:
		void set(string cod,string des,float pre,int num)
		{
			c=cod;
			d=des;
			p=pre;
			n=num;
		}
		string get_c()
		{
			return c;
		}
		string get_d()
		{
			return d;
		}
		float get_p()
		{
			return p;
		}
		int get_n()
		{
			return n;
		}
		void applicasconto()
		{
			p=p-(p/100*5);
		}
		float vendi(int x)
		{
			n=n-x;
			return p*x;
		}
		float valore()
		{
			return p*n;
		}
		
};
