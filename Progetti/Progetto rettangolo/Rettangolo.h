class rettangolo
{
	private:
		int b, h;
	public:
		rettangolo(int p,int q)
		{
			b=p;
			h=q;
		}
		int perimetro()
		{
			return (b*2)+(h*2);
		}
		int area()
		{
			return b*h;
		}
};
