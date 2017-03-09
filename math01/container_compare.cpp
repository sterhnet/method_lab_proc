 
#include "bibl.h"

 int CalcPunct(wisdom &w);
  bool compare(List* a,List* b)  
  {
	  if(CalcPunct(*(a->wisd)) >CalcPunct(*(b->wisd)))
		  return 1;
	  return 0;
  }
