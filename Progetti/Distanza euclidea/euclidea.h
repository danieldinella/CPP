#include <math.h>
class euclidea
{
	private:
		double x1,x2;
	public:
		void set_x1(double a)
		{
			x1=a;
		}
		void set_x2(double b)
		{
			x2=b;
		}
		double d()
		{
			return (abs(x1-x2));
		}
};
