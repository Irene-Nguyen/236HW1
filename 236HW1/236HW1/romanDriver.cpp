#include "roman.h"

int main() {
	string input;
	romanType romanNumber;
	char keepTrying;
	do  {
		cout << "Enter a roman number: ";
		cin >> input;
		romanNumber.storeRoman(input);
		romanNumber.RomanToDecimal();
		romanNumber.print();
		cout << "Try another number (y/n)? ";
		cin >> keepTrying;
	} while (keepTrying == 'Y' || keepTrying == 'y');
	cout << "Thank you!";
}