#include "recur.h"
#include <iostream>
using namespace std;

int main()
{
	int factor1, factor2;
	int number, digit;
	string plusString;
	string userString, stringCheck;

	cout << "Enter numbers to multiply: ";
	cin >> factor1 >> factor2;
	cout << "Product: " << prod(factor1, factor2) << endl;
	cout << endl;
	cout<< "Enter number: ";
	cin >> number;
	cout << "Enter digit to look for: ";
	cin >> digit;
	cout << numberOfAppearances(number, digit) << endl;
	cout << endl;
	cout << "Enter string to add plus signs to: " << endl;
	cin >> plusString;
	cout << allPlus(plusString) << endl;
	cout << endl;
	cout << "Enter string: " << endl;
	cin >> userString;
	cout << "Enter string to look for: " << endl;
	cin >> stringCheck;
	cout << numStringAppearances(userString, stringCheck) << endl;
}