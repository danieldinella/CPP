#include <iostream>
#include <string.h>
#include "Vettore.h"

using namespace std;
int main ()
{ int scelta, dim;
  float v;
  do
  {
	  cout<<"Quanti elementi ha il tuo vettore? (massimo 100)  ";
	  cin>>dim;
  }while (dim>100 || dim<1);
  
  Vettore v1(dim);
  do
  {
	cout<<endl;
    cout<<"****MenU' di Lavoro****"<<endl;
    cout<<"1. Inserimento 	     "<<endl;
    cout<<"2. Visualizzazione    "<<endl;
    cout<<"3. Visualizza media   "<<endl;
    cout<<"4. Visualizza minimo  "<<endl;
    cout<<"5. Visualizza massimo "<<endl;
    cout<<"0. Termina            "<<endl;
    cout<<endl<<"Inserisci scelta:  ";
    cin>>scelta;
    cout<<endl;
    switch (scelta)
    { case 0:
           break;
      case 1:
	      cout<<"Inserisci elementi "<<endl;
	      cin>>v;
	      while (v1.Inserimento(v))
          {
	         cin>>v;
          
          }
        
        break;
      case 2:
          cout<<endl;
          for (int i=0;i<v1.get_dim();i++)
          {
	      cout<<v1.get_elemento(i)<<endl;
          }
          cout<<endl;
      	   break;
      case 3:
	   cout<<"La media degli elementi e': "<<v1.media()<<endl;
      	   break;
      	    case 4:
	   cout<<"Il valore minimo  e': "<<v1.minimo()<<endl;
      	   break;
      	    case 5:
	   cout<<"Il valore massimo e': "<<v1.massimo()<<endl;
      	   break;
      default:
      	   cout<<"Scelta errata!!!!! Riprova!"<<endl;
    } 
  } while (scelta!=0);
    return 0;
}


      
