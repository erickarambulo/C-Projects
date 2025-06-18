/*
Chapter 6: Basic Array Operations
Name: Erick Arambulo
Date 17th June 2025
Purpose: The purpose for this project is to prompt user to input their
five numbers into vector/array and then display their vector/array, add
them altogether, and find the average. */

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
	// Declared and initialized arrays
	vector<int> numbers;
	// Declared variables
	int userInput;
	int sum = 0;

	// For loop to prompt user to enter their numbers 5 times
	for (int i = 1; i < 6; ++i) {
		cout << "Enter number " << i << ": ";
		cin >> userInput;
		numbers.push_back(userInput);
	}

	// Display a vector
	cout << "\nArray elements: ";
	for (int element : numbers) {
		cout << element << " ";
	}
	cout << endl;

	// Sum and average of a vector
	for (int j = 0; j < numbers.size(); ++j) {
		sum = sum + numbers.at(j);
	}
	cout << "Sum of elements: " << sum << endl;

	cout << fixed << setprecision(1);
	cout << "Average of elements: " << static_cast<double>(sum) / numbers.size() << endl;

	return 0;
}