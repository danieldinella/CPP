class quadrato
{
	private:
		int a;
	public:
		quadrato(int x)
		{
			a=x;
		}
		int perimetro()
		{
			return a*4;
		}
		int area()
		{
			return a*a;
		}		
};
