#include "tavolino.h"
main()
{
	piano b1(5,3);
	piede p1(4,8);
	tavolino t(b1,p1,4,"Rosso");
	t.stato();
}
