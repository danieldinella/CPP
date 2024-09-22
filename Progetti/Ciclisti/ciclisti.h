#include<string.h>
using namespace std;
class ciclisti
{
	public:
		string nome,cod;
		double minu=0;
	public:
		void set_ciclista(string n,string c)
		{
			nome=n;
			cod=c;
		}
		void agg(double m)
		{
			minu=m+minu;
		}
		string get_nome()
		{
			return nome;
		}
		string get_cod()
		{
			return cod;
		}
		double get_minu()
		{
			return minu;
		}
};
