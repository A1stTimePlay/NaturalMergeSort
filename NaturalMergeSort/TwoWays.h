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
	float *A;
	float *B;

public:
	TwoWays();
	~TwoWays();
	void ReadData(string fileName);
	void ShowOnScreen();
	void Merge();
	int getLengthB();
};

