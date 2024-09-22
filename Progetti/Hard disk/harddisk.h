#include <string>
using namespace std;
class harddisk
{
	private:
		string marca;
		int velocita,tempo,capacita;
	public:
		void leggiAttributi(string m,int v,int t,int c)
		{
			marca=m;
			velocita=v;
			tempo=t;
			capacita=c;
		}
		int punteggio()
		{
			return (velocita+(-200*tempo)+(500*capacita));
		}
		void stampadati()
		{
			cout<<"Marca:"<<marca<<endl;
			cout<<"Velocita':"<<velocita<<"rpm"<<endl;
			cout<<"Tempo:"<<tempo<<"ms"<<endl;
			cout<<"Capacita':"<<capacita<<"Gb"<<endl;
		}
};
