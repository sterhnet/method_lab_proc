#include "bibl.h"
void Out(aphorism &a, ofstream &ofst);
void Out(proverb  &p, ofstream &ofst);
int CalcPunct(wisdom &w);
//----------------------------------------------------
// ¬ывод параметров текущей фигуры в поток
void Out(wisdom &w, ofstream &ofst) {
	
	switch(w.k) {
    case wisdom::key::PROVERB:
		Out(w.p, ofst);
      break;
    case wisdom::key::APHORISM:
		Out(w.a, ofst);
      break;
    default:
      ofst << "Incorrect type!" << endl;
	
    }
	ofst << ": "<<w.content<<": CalcPunct - "<<CalcPunct(w)<<endl;
}
