#include "bibl.h" 

int CalcPunct(wisdom &w) {
    int ans=0;
	char p[]=".,?!;:-)(\"\'";
	for(int i=0;i<w.content.size();++i)
	{
		for(int j=0;j<strlen(p);++j)
			if(p[j]==w.content[i])
			{
				++ans;
				break;
			}
	}
    return ans;
  }