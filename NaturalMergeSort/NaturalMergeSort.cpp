#include <iostream>
#include <fstream>
#include <random>
#include <ctime>
#include "TwoWays.h"
using namespace std;

int main() {
	TwoWays test;
	test.ReadData("binary.bin");
	test.ShowRawData();
}