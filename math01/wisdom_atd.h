#include "proverb_atd.h"
#include "aphorism_atd.h"
#include "conundrum_atd.h"
#include <string>
using namespace std;
struct wisdom {
    // значения ключей для каждой из записей
    enum key {PROVERB, APHORISM,CONUNDRUM};   //поговорка, афоризм
    key k; // ключ
    // используемые альтернативы
	string content; //содержание
    union { // используем прямое включение
      proverb p;
      aphorism a;
	  conundrum c;
    };
};
