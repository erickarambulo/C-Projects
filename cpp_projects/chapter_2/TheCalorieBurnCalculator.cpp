/*
Chapter 2 Lab: The Calorie Burn Calculator
Name: Erick Arambulo
Date: 9th June 2025
Description: The purpose for this project is to ask users to input their weight in pounds
and the duration of their walk in minutes to calculate the calories burned.
*/

#include <iostream>
using namespace std;

int main() {
	// Variable declared and initialized with const
	const double CALORIES_PER_MINUTE_PER_POUND = 0.035;
	// it's for a user to input their weight and minute;
	int weight;
	int minutes;

	// Prompt user to state their weight
	cout << "Enter your weight in pounds: ";
	cin >> weight;

	// Prompt user to state their walking time in minutes
	cout << "Enter the duration of your walk in minutes: ";
	cin >> minutes;

	// Calculate the calories burned using this formula.
	double caloriesBurned = CALORIES_PER_MINUTE_PER_POUND * weight * minutes;

	// Final output
	cout << "\nEstimated calories burned: " << caloriesBurned << endl;

	return 0;
}