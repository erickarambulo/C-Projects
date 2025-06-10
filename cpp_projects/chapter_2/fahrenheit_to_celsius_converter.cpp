/*
Chapter 2 Lab: The Fahrenheit to Celsius Converter
Name: Erick Arambulo
Date: 9th June 2025
Description: This project is asking an user to input their number of fahrenheit degree into
celsius degree using converting calculator 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// Variables declared and initialized with const (const = cannot be changed later)
	const double FAHRENHEIT_OFFSET = 32.0;
	const double FAHRENHEIT_SCALING_FACTOR = 5.0 / 9.0;

	// Prompt an user to input a temperature in Fahrenheit
	double fahrenheitTemp;
	cout << "Enter temperature in Fahrenheit: ";
	cin >> fahrenheitTemp;

	// Calculate for Celsius using number for Fahrenheit
	cout << fixed << setprecision(1);
	double celsiusTemp = (fahrenheitTemp - FAHRENHEIT_OFFSET) * FAHRENHEIT_SCALING_FACTOR;

	// Final output
	cout << "\n" << fahrenheitTemp << " Fahrenheit is equal to " << celsiusTemp << " Celsius." << endl;

	return 0;
}