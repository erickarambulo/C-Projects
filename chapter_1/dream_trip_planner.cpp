/* 
Chapter 1 Lab Practice: The Dream Trip Planner
Name: Erick Arambulo
Date: 8th June 2025
Instruction: It is asking me to create a program for users to input their first name, dream destination city
and favorite food. The output will be about the dream trip based on their input.
*/
#include <iostream>
#include <string>
#include <limits> // to avoid interfere with cin >> and getline()
using namespace std;

int main() {
	// Variables assigned
	string firstName;
	string dreamDestinationCity;
	string favoriteFood;

	// Ask user to input their first name
	cout << "Please enter your first name: ";
	cin >> firstName;

	// installing cin.ignore() to avoid interfere with cin >> and getline()
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// Ask user to input their dream destination city
	cout << "Please enter your dream destination city: ";
	getline(cin, dreamDestinationCity);

	// Ask user to input their favorite food
	cout << "Please enter your favorite type of food: ";
	getline(cin, favoriteFood);

	// Output of their Dream Trip Planner
	cout << "\n--- Welcome to the Dream Trip Planner! ---" << endl;
	cout << "Hello, " << firstName << "! Your dream trip to " << dreamDestinationCity
		<< " sounds amazing." << endl;
	cout << "Imagine enjoying delicious " << favoriteFood << " food there!" << endl;
	
	return 0;
}