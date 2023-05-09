#include "FC.h"
#include <fstream>
using namespace std;

FC::FC(float cc) { c = cc; f = getF(); };
float FC::getF() { return (c * 9 / 5 + 32); }
float FC::getC() { return ((f - 32) * 5 / 9); }
