class tabl
{
	private:
		int v;
	public:
		void set_v(int a)
		{
			v=a;
		}
		int tab(int i)
		{
			int s;
			s=v*i;
			return s;
		}
};
