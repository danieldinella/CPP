class cerchio
{
	private:
		double r;
	public:
		void set_raggio(double a)
		{
			r=a;
		}
		double circonferenza()
		{
			return 2*3.14*r;
		}
		double area()
		{
			return 3.14*r*r;
		}
};
