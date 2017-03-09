#include "bibl.h"
void OutProverb(wisdom &w, ofstream &ofst);

void OutProverb(container &c, ofstream &ofst) {
	List* cur=c.cont;
	int i=1;
   while(cur!=NULL && c.n>=i)
	{
	  OutProverb(*(cur->wisd), ofst);
	  cur=cur->next;
	  ++i;
    }
}
