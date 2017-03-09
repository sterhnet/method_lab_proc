#include "bibl.h"
void In(proverb &p, std::ifstream &ifst);
void In(aphorism &a, std::ifstream &ifst);
void In(conundrum &a, std::ifstream &ifst);
wisdom* In(ifstream &ifst) {
    wisdom *ws;
    int k;
    ifst >> k;
    switch(k) {
    case 1:
      ws = new wisdom;
	  ifst >> ws->content;
	  ws->k = wisdom::key::PROVERB;
	  In(ws->p, ifst);
	  
      return ws;
    case 2:
      ws = new wisdom;
	  ifst >> ws->content;
      ws->k = wisdom::key::APHORISM;
	  In(ws->a, ifst);
      return ws;
	case 3:
      ws = new wisdom;
	  ifst >> ws->content;
      ws->k = wisdom::key::CONUNDRUM;
	  In(ws->c, ifst);
      return ws;
    default:
      return 0;
    }
}
