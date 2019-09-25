#include "TwoWays.h"


TwoWays::TwoWays() {
	LengthA = 0;
	LengthB = 0;
}

void TwoWays::ReadData(string fileName) {
	// read binary file
	int read;

	ifstream input_file;
	input_file.open(fileName, ios::binary);
	if (!input_file.is_open()) {
		cout << "can not open file";
	}

	input_file.read((char*)& read, sizeof(int));


	A[LengthA] = read;

	while (input_file.read((char*)& read, sizeof(int))) {
		if (A[LengthA] <= read) {
			A[LengthA + 1] = read;
			LengthA++;
			continue;
		}
		else {
			B[LengthB] = read;
			while (input_file.read((char*)& read, sizeof(int))) {
				if (B[LengthB] <= read) {
					B[LengthB + 1] = read;
					LengthB++;
					continue;
				}
				else {
					B[LengthB + 1] = read;
					break;
				}
			}
		}
		LengthA++;
		LengthB++;
	}
	input_file.close();
}

void TwoWays::ShowRawData() {
	for (int i = 0; i < LengthA; i++) {
		cout << A[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < LengthB; i++) {
		cout << B[i] << " ";
	}
	cout << endl;
}

TwoWays::~TwoWays() {
}
