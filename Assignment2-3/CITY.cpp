#include "CITY.h"
#include <iostream>
#include <fstream>
using namespace std;

// sprint 2
// ���� �µ��� ����� text file�� �Է����� �ϴ� constructor
CITY::CITY(char* a) {
	ifstream xx(a);
	if (!xx) {
		cout << "cant open.";
	}
	for (int i = 0; i < 12; i++) {
		xx >> CF[i].c;

	}
	xx.close();

}