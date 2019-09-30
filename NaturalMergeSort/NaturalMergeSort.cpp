#include <iostream>
#include <fstream>
#include <random>
#include <ctime>
#include "TwoWays.h"
using namespace std;

int main() {
	TwoWays test;
	test.ReadData("test.bin");
	test.Merge();
	while (true) {
		TwoWays temp;
		temp.ReadData("temp.bin");
		if (temp.getLengthB() == 0) break;
		else temp.Merge();
	}

	float read;
	ifstream input_file;
	input_file.open("temp.bin", ios::binary);
	while (input_file.read((char*)& read, sizeof(float)))
		cout << read << ' ';
	input_file.close();
}