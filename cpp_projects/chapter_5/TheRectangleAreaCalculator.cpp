/*
Chapter 5: The Rectangle Area Calculator with Functions
Name: Erick Arambulo
Date: 17th June 2025
Purpose: The purpose for this lab is to ask users to input their two numbers for
length and width to calculate for area of the rectangle.
*/

#include <iostream>
#include <iomanip>
using namespace std;

double calculateRectangleArea(double length, double width) {
	return length * width;
}

int main() {
	// Variables declared
	double userLength;
	double userWidth;

	// Prompt users to input their number
	cout << "Enter the length of the rectangle: ";
	cin >> userLength;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Enter the width of the rectangle: ";
	cin >> userWidth;

	// Calls for function
	double areaResult = calculateRectangleArea(userLength, userWidth);

	// Limit to 1 tenth
	cout << fixed << setprecision(1);
	// Final output
	cout << "The area of a rectangle with length " << userLength << " and width " << userWidth << " is " << areaResult << "." << endl;

	return 0;
}