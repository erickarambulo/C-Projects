/*

Chapter 6: Basic Array Operations with Arrays only instead of using vectora
Name: Erick Arambulo
Date: 17th June 2025
Purpose: The purpose for this project is to prompt user to input their
five numbers into vector/array and then display their vector/array, add
them altogether, and find the average. */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// Declared an array
	int numbers[5];
	// Declared variables
	int userInput;
	int sum = 0;

	// For loop to prompt user to enter their numbers 5 times
	for (int i = 0; i < 5; ++i) {
		cout << "Enter number " << (i + 1) << ": ";
		cin >> userInput;
		numbers[i] = userInput;
	}

	// Display a vector
	cout << "\nArray elements: ";
	for (int element : numbers) {
		cout << element << " ";
	}
	cout << endl;

	// Sum and average of a vector
	for (int j = 0; j < 5; ++j) {
		sum = sum + numbers[j];
	}
	cout << "Sum of elements: " << sum << endl;

	cout << fixed << setprecision(1);
	cout << "Average of elements: " << static_cast<double>(sum) / 5 << endl;

	return 0;
}