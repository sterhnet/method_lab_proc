#include "bibl.h"

void Out(proverb &p, ofstream &ofst) {
	ofst << "It is proverb from " << p.country; 
}
