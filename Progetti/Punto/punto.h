#include<math.h>
using namespace std;
class punto
{
	public:
		double x,y;
	public:
		punto()//Creo punto in O (0,0)
		{
			x=0;
			y=0;
		}
		punto(double x1,double y1)
		{
			x=x1;
			y=y1;
		}
		double distanza()
		{
			double d;
			d=sqrt(pow(x,2)+pow(y,2));
			return d;
		}
		double distanza (punto p)
		{
			double d;
			d=sqrt(pow(p.x,2)+pow(p.y,2));
			return d;
		}
		punto simmetrico(punto p)
		{
			punto psim;
			psim.x=-p.x;
			psim.y=-p.y;
			return psim;
		}
};
