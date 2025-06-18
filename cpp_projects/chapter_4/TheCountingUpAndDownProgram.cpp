/*
Chapter 4 Lab: The Counting Up and Down Program
Name: Erick Arambulo
Date: 10th June 2025
Description: The purpose of this lab is to test my basic knowledge on
basic for loop on counting up from one to five then counting down
from five to one. */

#include <iostream>
using namespace std;

int main() {
	// Counting up from 1 to 5 inclusive
	for (int i = 1; i < 6; ++i) {
		cout << i << endl;
	}
	
	// Print a simple statement between counting up and counting down
	cout << "--- Counting Up Done ---" << endl;

	// Counting down from 5 to 1 inclusive
	for (int j = 5; j > 0; --j) {
		cout << j << endl;
	}

	// Print a final and simple statement at the end of a program
	cout << "--- Counting Down Done ---" << endl;

	return 0;
}