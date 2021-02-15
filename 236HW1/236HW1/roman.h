#include<iostream>
#include<string>
using namespace std;

class romanType {
private:
	string romanNumber;
	int decimalNumber;
	void RomanToDecimal();
public:
	romanType(string);
	void printDecimal();
};