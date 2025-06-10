/*
* Name: Erick Arambulo
* Date: June 8th, 2026
* Chapter 1 Lab Assignment: "Personalized Mini-Bio Generator"
* Instruction: This lab assignment is asking user's input for their first name, favorite hobby
* and lucky number. Then it will produce a short mini-bio based on their input.
*/

#include <iostream>
#include <string>
#include <limits> // Required for numeric_limits to properly ask user's input for favorite hobby.
using namespace std;

int main() {
	// Variables assigned
	string firstName;
	string favoriteHobby;
	int number;

	// Prompt user to tell their first name
	cout << "Please enter your first name: ";
	cin >> firstName;

	// Ignore function to get user's input for favorite hobby
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// Prompt user to tell their favorite hobby
	cout << "What's your favorite hobby? " << endl;
	getline(cin, favoriteHobby);

	// Prompt user to tell their lucky number
	cout << "Finally, enter a lucky number: ";
	cin >> number;

	// Output at least three separate lines
	cout << "\n--- Your Mini-Bio ---\n";
	cout << "Hello, " << firstName << "!" << endl;
	cout << "It's great to know you enjoy " << favoriteHobby << "." << endl;
	cout << "Your lucky number, " << number << ", will surely bring you good fortune!" << endl;

	return 0;
}