class televisione
{
	private:
		bool acc,mut;
		int vol,can;
	public:
		televisione(bool a,bool m,int v,int c)
		{
			acc=a;
			mut=m;
			vol=v;
			can=c;
		}
		void pulsanterosso()
		{
			if(acc==true)
			{
				acc=false;
			}
			else
			{
				acc=true;
			}
		}
		void canaleSuccessivo()
		{
			if(can!=99)
			{
				can++;
			}
		}
		void canalePrecedente()
		{
			if(can!=0)
			{
				can--;
			}
		}
		void aumentaVolume()
		{
			if(vol!=10)
			{
				vol++;
			}
		}
		void abbassaVolume()
		{
			if(vol!=0)
			{
				vol--;
			}
		}
		void impostaCanale(int c)
		{
			can=c;
		}
		void pulsanteSilenzioso()
		{
			if(mut==true)
			{
				mut=false;
			}
			else
			{
				mut=true;
			}
		}
		bool get_acc()
		{
			return acc;
		}
		bool get_mut()
		{
			return mut;
		}
		int get_vol()
		{
			return vol;
		}
		int get_can()
		{
			return can;
		}
};
