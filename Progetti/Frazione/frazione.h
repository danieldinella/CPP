class frazione
{
	private:
		int n,d;
	public:
		void set_n(int a)
		{
			n=a;
		}
		void set_d(int b)
		{
			d=b;
		}
		int get_n()
		{
			return n;
		}
		int get_d()
		{
			return d;
		}
		float calcola()
		{
			return n/d;
		}
		frazione moltiplicazione(frazione x,frazione y)
		{
			frazione z;
			z.n=x.n*y.n;
			z.d=x.d*y.d;
			return z;
		}
		frazione divisione(frazione x,frazione y)
		{
			frazione z;
			z.n=x.n*y.d;
			z.d=x.d*y.n;
			return z;
		}
		frazione semplifica(frazione x)
		{
			frazione z;
			int r;
			if(x.n>x.d)
			{
				r=x.n%x.d;
			}
			else
			{
				r=x.d%x.n;
			}
			z.n=x.n/r;
			z.d=x.d/r;
			return z;
		}
		frazione addizione(frazione x,frazione y)
		{
			frazione z;
			int r;
			if(x.d>y.d)
			{
				r=x.d%y.d;
			}
			else
			{
				r=y.d%x.d;
			}
			z.d=(x.d*y.d)/r;
			z.n=(z.d/x.d*x.n)+(z.d/y.d*y.n);
			return z;
		}
};
