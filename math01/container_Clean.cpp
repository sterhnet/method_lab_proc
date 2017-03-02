 
#include "bibl.h"
// Очистка контейнера от элементов (освобождение памяти)
void Clear(container &c) {
	List* a;
	while(c.cont!=NULL && c.n>0)
	{
		a=c.cont->next;
		delete c.cont;
		c.cont=a;
		--c.n;
	}
	c.n=0;
	c.cont=NULL;
}
