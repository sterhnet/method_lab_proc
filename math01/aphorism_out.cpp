#include "bibl.h"

void Out(aphorism &a, ofstream &ofst) {
	ofst << "It is " << a.author<<"\'s aphorism"; 
}