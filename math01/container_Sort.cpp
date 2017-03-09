#include "bibl.h"
bool compare(List* a,List *b);
void Sort(container &c)  
  {
	  bool b=1;
	  if(c.n<2)
		  b=0;
	  while(b)
	  {
		b=0;
		List* prevprev=NULL;
		List* prev=c.cont;
		List* cur = c.cont->next;
		int num = c.n;
		while(cur!=NULL && num>0)
		{
			if(compare(prev,cur))
			{
				b=1;
				List* buf;
				buf = cur->next;
				cur->next=prev;
				prev->next=buf;
				if(prevprev!=NULL)
					prevprev->next=cur;
				else
					c.cont = cur;
				buf = cur;
				cur = prev;
				prev = buf;
			}
			prevprev=prev;
			prev=cur;
			cur=cur->next;
		}
			
	  }
}