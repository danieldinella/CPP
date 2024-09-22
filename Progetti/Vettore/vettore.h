#include <string.h>
using namespace std;
#define maxDim 100

class Vettore
{ private:
	 int dim;
	 float vet[maxDim];
	 int i;
  public:
	 Vettore (int d)
	 { 
	   dim=d;
	   for(i=0;i<dim;i++)
	     {
	       vet[i]=0;
	     }
	   i=0;
	   
     } //Fine costruttore generico
	 
       bool Inserimento (float v)
       {
	       if ((i>=dim) || (v<0))
	           return false;
	       vet[i]=v;    // queste due istruzioni si possono anche sostituire con la seguente:
	       i++;         // vet[i++]=v;
		   return true;
	    }
       
       float media ()
           { 
			 float s=0;
             for (int i=0;i<dim;i++)
             { 
				 s=s+vet[i];
             }
	         return s/dim;
           }
       
       float minimo()
           { 
			 float m=vet[0];
             for (int i=0;i<dim;i++)
             { 
				 if (m>vet[i])
				     m=vet[i];
             }
	         return m;
           }
           
       float massimo()
           { 
			 float M=vet[0];
             for (int i=0;i<dim;i++)
             { 
				 if (M<vet[i])
				     M=vet[i];
             }
	         return M;
           }
           
       int get_dim()
           { 
             return dim;
           }
       
       int get_elemento(int j)
           { 
             return vet[j];
           }
};
