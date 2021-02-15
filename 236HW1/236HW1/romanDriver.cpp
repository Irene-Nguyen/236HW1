#include "roman.h"

int main() {
	string inputRoman;
	char keepTrying;
	do  {
		cout << "Enter a roman number: ";
		cin >> inputRoman;
		romanType romanNumber(inputRoman);
		romanNumber.printDecimal();
		cout << "Try another number (y/n)? ";
		cin >> keepTrying;
	} while (keepTrying == 'Y' || keepTrying == 'y');
	cout << "Thank you!";
}