class cesare
{
	private:
		int k,a;
	public:
		void set_k(int n)
		{
			k=n;
		}
		char crittografia(char x)
		{
			a=int(x);
			a=a+k;
			return char(a);
		}
};
