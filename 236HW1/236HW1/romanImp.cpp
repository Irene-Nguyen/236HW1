#include "roman.h"

romanType::romanType() {
	romanNumber = "\0";
	decimalNumber = 0;
}

romanType::romanType(string inputRoman) {
	inputRoman = "\0";
	decimalNumber = 0;
}


void romanType::storeRoman(string inputRoman) {
	romanNumber = inputRoman;
}

void romanType::RomanToDecimal() {
	int* decimalArray = nullptr;
	decimalArray = new (nothrow) int[romanNumber.length()];
	for (unsigned i = 0; i < romanNumber.length(); i++) {
		switch (romanNumber[i]) {
		case'M':
			decimalArray[i] = 1000;
			break;
		case'D':
			decimalArray[i] = 500;
			break;
		case'C':
			decimalArray[i] = 100;
			break;
		case'L':
			decimalArray[i] = 50;
			break;
		case'X':
			decimalArray[i] = 10;
			break;
		case'V':
			decimalArray[i] = 5;
			break;
		case'I':
			decimalArray[i] = 1;
			break;
		}
	}
	for (unsigned i = 0; i < romanNumber.length() - 1; i++) {
		if (decimalArray[i] >= decimalArray[i + 1]) {
			decimalNumber += decimalArray[i];
		}
		else {
			decimalNumber -= decimalArray[i];
		}
		decimalNumber += decimalArray[romanNumber.length() - 1];
	}
	delete decimalArray;
}

void romanType::print() {
	cout << "The equivalent of the Roman numeral " << romanNumber << " is " << decimalNumber << endl;
}