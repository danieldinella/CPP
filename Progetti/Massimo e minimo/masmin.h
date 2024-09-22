class masmin
{
	private:
		int a,b,c;
	public:
		void set_abc(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}
		void masmino(int &mas,int &mino)
		{
			if(a>b)
			{
				mas=a;
				mino=b;
			}
			else
			{
				mino=a;
				mas=b;
			}
			if(mas<c)
			{
				mas=c;
			}
			else
			{
				if(mino>c)
				{
					mino=c;
				}
			}
		}
};
