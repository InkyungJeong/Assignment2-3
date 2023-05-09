#include <iostream>
#include <fstream>
#include "FC.h"
#include "CITY.h"
using namespace std;

int main() {
	CITY seoul((char*)"Seoul.txt");
	CITY newyork((char*)"Newyork.txt");
	CITY london((char*)"London.txt");
	CITY paris((char*)"Paris.txt");
	CITY cities[4] = { seoul, newyork, london, paris };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 12; j++) {
			cities[i].CF[j].f = cities[i].CF[j].getF();
		}
	}

	ofstream xx("cities.txt");
	xx << "Seoul.c     " << "Seoul.f     " << "Newyork.c     " << "Newyork.f     " << "London.c     " << "London.f     " << "Paris.c     " << "Paris.f     " << endl;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 4; j++) {
			xx << cities[j].CF[i].c << "          ";
			xx << cities[j].CF[i].f << "          ";
		}
		xx << endl;
	}
	xx.close();




}