#include <iostream>
#include <fstream>
#include <random>
#include <ctime>
#include <limits>
using namespace std;

int main() {

	// initialize seed
	srand(static_cast <unsigned>(time(0)));

	ofstream output_file;

	// create 10MB binary file
	output_file.open("10MB.bin", ios::binary);
	for (int i = 0; i < 2500000; i++) {
		float write = numeric_limits<float>::min() + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (numeric_limits<float>::max() - numeric_limits<float>::min())));

		output_file.write((char*)& write, sizeof(float));
	}
	output_file.close();

	// create 20MB binary file
	output_file.open("20MB.bin", ios::binary);
	for (int i = 0; i < 5000000; i++) {
		float write = numeric_limits<float>::min() + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (numeric_limits<float>::max() - numeric_limits<float>::min())));

		output_file.write((char*)& write, sizeof(float));
	}
	output_file.close();

	// create 30MB binary file
	output_file.open("30MB.bin", ios::binary);
	for (int i = 0; i < 7500000; i++) {
		float write = numeric_limits<float>::min() + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (numeric_limits<float>::max() - numeric_limits<float>::min())));

		output_file.write((char*)& write, sizeof(float));
	}
	output_file.close();

	// create 40MB binary file
	output_file.open("40MB.bin", ios::binary);
	for (int i = 0; i < 10000000; i++) {
		float write = numeric_limits<float>::min() + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (numeric_limits<float>::max() - numeric_limits<float>::min())));

		output_file.write((char*)& write, sizeof(float));
	}
	output_file.close();

	// create 50MB binary file
	output_file.open("50MB.bin", ios::binary);
	for (int i = 0; i < 12500000; i++) {
		float write = numeric_limits<float>::min() + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (numeric_limits<float>::max() - numeric_limits<float>::min())));

		output_file.write((char*)& write, sizeof(float));
	}
	output_file.close();

	// create 60MB binary file
	output_file.open("60MB.bin", ios::binary);
	for (int i = 0; i < 15000000; i++) {
		float write = numeric_limits<float>::min() + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (numeric_limits<float>::max() - numeric_limits<float>::min())));

		output_file.write((char*)& write, sizeof(float));
	}
	output_file.close();

	// create 70MB binary file
	output_file.open("70MB.bin", ios::binary);
	for (int i = 0; i < 17500000; i++) {
		float write = numeric_limits<float>::min() + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (numeric_limits<float>::max() - numeric_limits<float>::min())));

		output_file.write((char*)& write, sizeof(float));
	}
	output_file.close();

	// create 80MB binary file
	output_file.open("80MB.bin", ios::binary);
	for (int i = 0; i < 20000000; i++) {
		float write = numeric_limits<float>::min() + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (numeric_limits<float>::max() - numeric_limits<float>::min())));

		output_file.write((char*)& write, sizeof(float));
	}
	output_file.close();

	// create 90MB binary file
	output_file.open("90MB.bin", ios::binary);
	for (int i = 0; i < 22500000; i++) {
		float write = numeric_limits<float>::min() + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (numeric_limits<float>::max() - numeric_limits<float>::min())));

		output_file.write((char*)& write, sizeof(float));
	}
	output_file.close();

	// create 100MB binary file
	output_file.open("100MB.bin", ios::binary);
	for (int i = 0; i < 25000000; i++) {
		float write = numeric_limits<float>::min() + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (numeric_limits<float>::max() - numeric_limits<float>::min())));

		output_file.write((char*)& write, sizeof(float));
	}
	output_file.close();

	// read binary file
	//float read;
	//ifstream input_file;
	//input_file.open("binary.bin", ios::binary);
	//while (input_file.read((char*)& read, sizeof(float)))
	//	cout << read << '\n';
	//input_file.close();

	cout << "Successful create 10 files";
	return 0;


}