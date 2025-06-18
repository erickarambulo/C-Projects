/*
Chapter 4 Lab Assignment: The Right-Angled Triangle Pattern
Name: Erick Arambulo
Date: 11th June 2025
Description: */

#include <iostream>
using namespace std;

int main() {
	// Variable declared
	int height;
	

	// Ask user to input their height of the triangle (1 - 10)
	cout << "Enter the height of the triangle (1-10): ";
	cin >> height;

	// Input validation
	if ((height > 0) && (height < 11)) {
		for (int i = 1; i <= height; ++i) {
			for (int j = 0; j < i; ++j) {
				cout << "*";
			}
			cout << endl;
		}
	}
	else {
		cout << "Invalid height. Please enter a number between 1 and 10." << endl;
	}

	return 0;
}