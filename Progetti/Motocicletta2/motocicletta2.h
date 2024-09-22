#include<iostream>
#include<string>
using namespace std;
class motore
{
	private:
		string serie;
		int cilindrata;
	public:
		motore()
		{
			serie=" ";
			cilindrata=0;
		}
		motore(string s,int c)
		{
			serie=s;
			cilindrata=c;
		}
		void mostra()
		{
			cout<<cilindrata;
		}
};
class ruota
{
	private:
		double diametro,larghezza;
	public:
		ruota()
		{
			diametro=0;
			larghezza=0;
		}
		ruota(double d,double l)
		{
			diametro=d;
			larghezza=l;
		}
};
class motocicletta2
{
	private:
		string marca,modello;
		motore m;
		ruota rp;
		ruota ra;
	public:
		motocicletta2(string x,string d,motore mot,ruota p,ruota a)
		{
			marca=x;
			modello=d;
			m=mot;
			rp=p;
			ra=a;
		}
		void mostrastato()
		{
			cout<<marca<<endl;
			cout<<modello<<endl;
			m.mostra();
		}
};
