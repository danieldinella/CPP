class contatore
{
	private:
		int k;
	public:
		void set_k(int i)
		{
			k=i;
		}
		int get_k()
		{
			return k;
		}
		int cont()
		{
			get_k();
			k--;
		}
};
