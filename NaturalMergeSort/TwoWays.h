#pragma once
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class TwoWays
{
private:
	int LengthA;
	int LengthB;
	int A[10];
	int B[10];
	int C[10];

public:
	TwoWays();
	~TwoWays();
	void ReadData(string fileName);
	void ShowRawData();
};

