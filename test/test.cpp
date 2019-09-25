#include <iostream>
#include <fstream>
#include <random>
#include <ctime>
#include <limits>
using namespace std;

int main() {
	int read;
	ifstream input_file;
	input_file.open("binary.bin", ios::binary);
	while (input_file.read((char*)& read, sizeof(int)))
		cout << read << '\n';
	input_file.close();
}
