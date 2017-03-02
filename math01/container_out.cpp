#include "bibl.h"
void Out(wisdom &w, ofstream &ofst);

void Out(container &c, ofstream &ofst) {
    ofst << "Container contains " << c.n << " elements." << endl;
	List* cur=c.cont;
	int i=1;
   while(cur!=NULL && c.n>=i)
	{
      ofst << i << ": ";
	  Out(*(cur->wisd), ofst);
	  ofst << endl;
	  cur=cur->next;
	  ++i;
    }
}
