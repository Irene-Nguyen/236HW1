#include<iostream>
#include<string>
using namespace std;

class romanType {
private:
	string romanNumber;
	int decimalNumber;
public:
	romanType();
	romanType(string);
	void storeRoman(string);
	void RomanToDecimal();
	void print();
	//void printDecimal();
};