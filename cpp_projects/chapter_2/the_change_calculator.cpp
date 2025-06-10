/* 
Chapter 2 Lab: The Change Calculator
Name: Erick Arambulo
Date: 9th June 2025
Purpose: This program calculates the amount of cents from 0 to 99 and converts
it into the number of quarters, dimes, nickels, and pennies.
*/

#include <iostream>
using namespace std;

int main() {
	// Variable assigned
	int totalCents;
	int quarters;
	int dimes;
	int nickels;
	int pennies;

	// Prompt user to input their amount of cents from 0 to 99
	cout << "Enter the amount of cents (0-99): ";
	cin >> totalCents;

	// Automatically tell user to prompt from 0 to 99 only
	if ((totalCents < 0) || (totalCents > 99)) {
		cout << "This is an invalid number! Please input your number between 0 and 99." << endl;
	}
	else {
		quarters = totalCents / 25;
		totalCents = totalCents % 25;

		dimes = totalCents / 10;
		totalCents = totalCents % 10;

		nickels = totalCents / 5;
		totalCents = totalCents % 5;

		pennies = totalCents;

		cout << "Quarters: " << quarters << endl;
		cout << "Dimes: " << dimes << endl;
		cout << "Nickels: " << nickels << endl;
		cout << "Pennies: " << pennies << endl;
	}

	return 0;
}