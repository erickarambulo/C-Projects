/*
Chapter 5: The Temperature Converter with Multiple Functions
Name: Erick Arambulo
Date: 17th June 2025
Purpose: The purpose for this lab is to take user inputs and convert 
them from fahrenheit into celsius.
*/

#include <iostream>
#include <iomanip>
using namespace std;

double getInputFahrenheit() {
	// Declare a variable
	double userFahrenheit;

	// Prompt user to input their Fahrenheit
	cout << "Enter temperature in Fahrenheit: ";
	cin >> userFahrenheit;

	// Return Fahrenheit
	return userFahrenheit;
}

double convertFahrenheitToCelsius(double fahrenheitTemp) {
	return (fahrenheitTemp - 32.0) * (5.0 / 9.0);
}

void displayResults(double fahrenheitTemp, double celsisusTemp) {
	cout << fixed << setprecision(1);
	cout << "\n" << fahrenheitTemp << " Fahrenheit is equal to " << celsisusTemp << " Celsius." << endl;
}

int main() {
	double userInput;
	double userValue;

	userInput = getInputFahrenheit();
	userValue = convertFahrenheitToCelsius(userInput);
	displayResults(userInput, userValue);

	return 0;
}