/*
Chapter 3: 'if', 'else if', and 'else' branches practice project on
The Leap Year Checker.
Name: Erick Arambulo
Date: 9th June 2025
Description: The Leap Year Checker is a program I developed using C++.
It allows users to input a year and then verifies whether that year is
a leap year or not.
*/

#include <iostream>
using namespace std;

int main() {
	// Variable declared
	int year;

	// Prompt users to input their number for year
	cout << "Enter a year: ";
	cin >> year;

	// if and else branches
	if ((year % 400 == 0) || ((year % 4 == 0) && !(year % 100 == 0))) {
		cout << year << " is a leap year." << endl;
	}
	else {
		cout << year << " is NOT a leap year." << endl;
	}

	return 0;
}