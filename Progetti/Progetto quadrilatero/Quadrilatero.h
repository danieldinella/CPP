class quadrilatero
{
	private:
		float l1,l2;
	public:
		void set_l(float b,float h)
		{
			l1=b;
			l2=h;
		}
		float perimetro()
		{
			return (l1+l2)*2;
		}
};
