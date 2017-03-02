#include "bibl.h"
wisdom* In(ifstream &ifst);
void In(container &c, ifstream &ifst) {
	List* cur=c.cont;
	if(c.cont==NULL)
	{
		c.cont=new List;
		cur=c.cont;
	}else
	{
		while(cur->next!=NULL)
			cur=cur->next;
		cur->next=new List;
		cur=cur->next;
	}
	List* prev=cur;
    while(!ifst.eof()) {
		if((cur->wisd = In(ifst)) != 0) 
		{ 
			c.n++; 
			prev=cur;
			cur->next=new List; 
			cur=cur->next;
		}
    }
	prev->next=NULL;
}
