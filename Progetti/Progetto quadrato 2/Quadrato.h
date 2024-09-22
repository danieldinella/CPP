class quadrato
{
	private:
		float la,p,a;
	public:
		void set_lato(float l)
		{
			la=l;
		}
		float get_lato()
		{
			return la;
		}
		void perimetro()
		{
			p=la*4;
		}
		float get_perimetro()
		{
			return p;
		}
		void area()
		{
			a=la*la;
		}
		float get_area()
		{
			return a;
		}
};
