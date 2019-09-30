#include <iostream>
#include <fstream>
#include <random>
#include <ctime>
#include <limits>
using namespace std;

int main() {

	// initialize seed
	random_device rd; // obtain a random number from hardware
	mt19937 eng(rd()); // seed the generator
	uniform_int_distribution<> distr(0, 100); // define the range


	ofstream output_file;

	output_file.open("test.bin", ios::binary);
	for (int i = 0; i < 100; i++) {
		float write = distr(eng); // generate numbers
		output_file.write((char*)& write, sizeof(float));
	}
	output_file.close();
	cout << "successful create test file" << endl;

	//output_file.open("1MB.bin", ios::binary);
	//for (int i = 0; i < 250000; i++) {
	//	float write = distr(eng); // generate numbers
	//	output_file.write((char*)& write, sizeof(float));
	//}
	//output_file.close();
	//cout << "successful create 1MB file" << endl;

	//// create 10MB binary file
	//output_file.open("10MB.bin", ios::binary);
	//for (int i = 0; i < 2500000; i++) {
	//	float write = distr(eng); // generate numbers
	//	output_file.write((char*)& write, sizeof(float));
	//}
	//output_file.close();
	//cout << "successful create 10MB file" << endl;

	//// create 20MB binary file
	//output_file.open("20MB.bin", ios::binary);
	//for (int i = 0; i < 5000000; i++) {
	//	float write = distr(eng); // generate numbers
	//	output_file.write((char*)& write, sizeof(float));
	//}
	//output_file.close();
	//cout << "successful create 20MB file" << endl;

	//// create 30MB binary file
	//output_file.open("30MB.bin", ios::binary);
	//for (int i = 0; i < 7500000; i++) {
	//	float write = distr(eng); // generate numbers
	//	output_file.write((char*)& write, sizeof(float));
	//}
	//output_file.close();
	//cout << "successful create 30MB file" << endl;

	//// create 40MB binary file
	//output_file.open("40MB.bin", ios::binary);
	//for (int i = 0; i < 10000000; i++) {
	//	float write = distr(eng); // generate numbers
	//	output_file.write((char*)& write, sizeof(float));
	//}
	//output_file.close();
	//cout << "successful create 40MB file" << endl;

	//// create 50MB binary file
	//output_file.open("50MB.bin", ios::binary);
	//for (int i = 0; i < 12500000; i++) {
	//	float write = distr(eng); // generate numbers
	//	output_file.write((char*)& write, sizeof(float));
	//}
	//output_file.close();
	//cout << "successful create 50MB file" << endl;

	//// create 60MB binary file
	//output_file.open("60MB.bin", ios::binary);
	//for (int i = 0; i < 15000000; i++) {
	//	float write = distr(eng); // generate numbers
	//	output_file.write((char*)& write, sizeof(float));
	//}
	//output_file.close();
	//cout << "successful create 60MB file" << endl;

	//// create 70MB binary file
	//output_file.open("70MB.bin", ios::binary);
	//for (int i = 0; i < 17500000; i++) {
	//	float write = distr(eng); // generate numbers
	//	output_file.write((char*)& write, sizeof(float));
	//}
	//output_file.close();
	//cout << "successful create 70MB file" << endl;

	//// create 80MB binary file
	//output_file.open("80MB.bin", ios::binary);
	//for (int i = 0; i < 20000000; i++) {
	//	float write = distr(eng); // generate numbers
	//	output_file.write((char*)& write, sizeof(float));
	//}
	//output_file.close();
	//cout << "successful create 80MB file" << endl;

	//// create 90MB binary file
	//output_file.open("90MB.bin", ios::binary);
	//for (int i = 0; i < 22500000; i++) {
	//	float write = distr(eng); // generate numbers
	//	output_file.write((char*)& write, sizeof(float));
	//}
	//output_file.close();
	//cout << "successful create 90MB file" << endl;

	//// create 100MB binary file
	//output_file.open("100MB.bin", ios::binary);
	//for (int i = 0; i < 25000000; i++) {
	//	float write = distr(eng); // generate numbers
	//	output_file.write((char*)& write, sizeof(float));
	//}
	//output_file.close();
	//cout << "successful create 100MB file" << endl;

	// read binary file
	//float read;
	//ifstream input_file;
	//input_file.open("1MB.bin", ios::binary);
	//while (input_file.read((char*)& read, sizeof(float)))
	//	cout << read << '\n';
	//input_file.close();

	//cout << "Successful create 10 files";
	return 0;


}