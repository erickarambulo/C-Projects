/*
Chapter 4 Lab: The Positive Number Accumulator
Name: Erick Arambulo
Date 11th June 2025
Description: The purpose for this program is to prompt user to input their number as long
as it is over 1 to add up after their input with new current input until the user input 
either a 0 or negative number.
*/

#include <iostream>
using namespace std;

int main() {
	// Variable declared
	int currentNumber;
	// Variable declared and initialized
	int totalSum = 0;

	// Prompt the user to enter a positive integer
	cout << "Enter a positive integer (or 0 or negative to stop): ";
	cin >> currentNumber;

	// While loop 
	while (currentNumber > 0) {
		totalSum = totalSum + currentNumber;
		cout << "Enter another positive integer (or 0 or negative to stop): ";
		cin >> currentNumber;
	}

	// Final output of a total number from adding up in while loop
	cout << "Total sum: " << totalSum << endl;

	return 0;
}