class triangolo
{
	private:
		float l1,l2,l3;
	public:
		void set_e(float a)
		{
			l1=a;
			l2=a;
			l3=a;
		}
		void set_i(float a,float b)
		{
			l1=a;
			l2=a;
			l3=b;
		}
		void set_s(float a,float b,float c)
		{
			l1=a;
			l2=b;
			l3=c;
		}
		float perimetro()
		{
			return l1+l2+l3;
		}
};
