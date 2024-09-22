#include<string>
using namespace std;
const int dim=8;
string materia[dim]={"ITA","STO","MAT","INF","TEP","SER","EF","TEL"};
class studenti
{
	private:
		string nome,cognome;
		float voto[dim];
	public:
		studenti(string n,string c)
		{
			nome=n;
			cognome=c;
		}
		void inserimento()
		{
			for(int i=0;i<dim;i++)
			{
				cout<<materia[i]<<":";
				cin>>voto[i];
			}
		}
		void visualizzazione()
		{
			for(int i=0;i<dim;i++)
			{
				cout<<materia[i]<<":";
				cout<<voto[i]<<endl;
			}
		}
		float media()
		{
			float s=0;
			for(int i=0;i<dim;i++)
			{
				s=s+voto[i];
			}
			return s/dim;
		}
};
