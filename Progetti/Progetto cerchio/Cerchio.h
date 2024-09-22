class cerchio
{
	private:
		double r;
	public:
		cerchio(double p)
		{
			r=p;
		}
		double area()
		{
			return (3.14)*(r*r);
		}
		double lunghezza()
		{
			return (2)*(3.14)*(r);
		}
}
