#include "bibl.h"
void Out(aphorism &a, ofstream &ofst);
void Out(proverb  &p, ofstream &ofst);
void Out(conundrum  &p, ofstream &ofst);
//----------------------------------------------------
// ����� ���������� ������� ������ � �����
void Out(wisdom &w, ofstream &ofst) {
	
	switch(w.k) {
    case wisdom::key::PROVERB:
		Out(w.p, ofst);
      break;
    case wisdom::key::APHORISM:
		Out(w.a, ofst);
      break;
	 case wisdom::key::CONUNDRUM:
		Out(w.c, ofst);
      break;
    default:
      ofst << "Incorrect type!" << endl;
	
    }
	ofst << ": "<<w.content<<endl;
}
