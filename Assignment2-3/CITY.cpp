#include "CITY.h"
#include <iostream>
#include <fstream>
using namespace std;

// sprint 2
// 섭씨 온도가 저장된 text file을 입력으로 하는 constructor
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