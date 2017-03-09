#include "bibl.h"
void Out(proverb  &p, ofstream &ofst);

//----------------------------------------------------
// ¬ывод параметров текущей фигуры в поток
void OutProverb(wisdom &w, ofstream &ofst) {
	
	if(w.k==wisdom::key::PROVERB) 
	{
		Out(w.p, ofst);
		ofst << ": "<<w.content<<endl;
	}
}
