#include "TwoWays.h"


TwoWays::TwoWays() {
	LengthA = 0;
	LengthB = 0;
	this->A = new float[250000];
	this->B = new float[250000];
}

void TwoWays::ReadData(string fileName) {
	LengthA = 0;
	LengthB = 0;
	// read binary file
	float read;

	ifstream input_file;
	input_file.open(fileName, ios::binary);
	if (!input_file.is_open()) {
		cout << "can not open file";
	}

	// first number of one runs in A
	input_file.read((char*)& read, sizeof(float));
	A[LengthA] = read;
	LengthA++;

	while (input_file.read((char*)& read, sizeof(float))) {
		// other number of that run in A
		if (A[LengthA - 1] <= read) {
			A[LengthA] = read;
			LengthA++;
			continue;
		}
		else {
			// first number of one runs in B
			B[LengthB] = read;
			LengthB++;

			// other number for that runs in B
			while (input_file.read((char*)& read, sizeof(float))) {
				if (B[LengthB - 1] <= read) {
					B[LengthB] = read;
					LengthB++;
					continue;
				}
				else {
					// first number of next runs in A
					A[LengthA] = read;
					LengthA++;
					break;
				}
			}
		}
	}
	input_file.close();
}

void TwoWays::ShowOnScreen() {
	for (int i = 0; i < LengthA; i++) {
		cout << A[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < LengthB; i++) {
		cout << B[i] << " ";
	}
	cout << endl;
}

void TwoWays::Merge() {
	ofstream output_file;
	output_file.open("temp.bin", ios::binary);
	int a = 0, b = 0;
	while (a < LengthA || b < LengthB) {
		if (a == LengthA) { // khi đã duyệt hết mảng A mà mảng B vẫn còn phần tử
			//C[c] = B[b];
			output_file.write((char*)& B[b], sizeof(float));
			b++;
			//c++;
			continue;
		}
		if (b == LengthB) { // khi đã duyệt hết mảng B mà mảng A vẫn còn phần tử
			//C[c] = A[a];
			output_file.write((char*)& A[a], sizeof(float));
			a++;
			//c++;
			continue;
		}
		if (A[a] <= B[b]) {
			//C[c] = A[a];
			output_file.write((char*)& A[a], sizeof(float));
			a++;
			//c++;
			if (A[a] < A[a - 1]) { // khi hết 1 runs ở A
				do {
					//C[c] = B[b];
					output_file.write((char*)& B[b], sizeof(float));
					b++;
					//c++;
				} while (B[b] > B[b - 1] && b <= LengthB); // đến khi hết runs đang trộn ở B
				continue;
			}
		}
		if (A[a] > B[b]) {
			//C[c] = B[b];
			output_file.write((char*)& B[b], sizeof(float));
			b++;
			//c++;
			if (B[b] < B[b - 1]) { // khi hết 1 runs ở B
				do {
					//C[c] = A[a];
					output_file.write((char*)& A[a], sizeof(float));
					a++;
					//c++;
				} while (A[a] > A[a - 1] && a <= LengthA); // đến khi hết runs đang trộn ở A
				continue;
			}
		}
	}
	output_file.close();
}

int TwoWays::getLengthB(){
	return LengthB;
}

TwoWays::~TwoWays() {
	delete[]A;
	delete[]B;
	//delete[]C;
}
