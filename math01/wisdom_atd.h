#include "proverb_atd.h"
#include "aphorism_atd.h"
#include <string>
using namespace std;
struct wisdom {
    // �������� ������ ��� ������ �� �������
    enum key {PROVERB, APHORISM};   //���������, �������
    key k; // ����
    // ������������ ������������
	int mark; //������
	string content; //����������
    union { // ���������� ������ ���������
      proverb p;
      aphorism a;
    };
};
