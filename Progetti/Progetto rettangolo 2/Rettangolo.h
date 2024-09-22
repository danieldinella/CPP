class rettangolo
{
	private:
		float b,h;
	public:
		void set_base(float x)
		{
			b=x;
		}
		void set_altezza(float y)
		{
			h=y;
		}
		float perimetro()
		{
			return (b+h)*2;
		}
		float area()
		{
			return b*h;
		}
};
