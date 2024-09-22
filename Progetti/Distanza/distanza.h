class distanza
{
	private:
		double x,y;
	public:
		distanza(double a,double b)
		{
			x=a;
			y=b;
		}
		double d()
		{
			return x+y;
		}
};
