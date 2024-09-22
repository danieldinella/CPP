#include<string>
#include<iostream>
using namespace std;
class motore
{
	public:
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
