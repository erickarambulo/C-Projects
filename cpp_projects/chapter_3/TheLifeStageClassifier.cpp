/*
Chapter 3: 'if', 'else if', and 'else' branches practice project on Life Stage Classifier
Name: Erick Arambulo
Date: 9th June 2025
Description: I created a project about The Life Stage Classifer. It's a program that prompt
users to input their age, and it will tell them if they are a child, teenager, adult, or
senior citizen.*/

#include <iostream>
using namespace std;

int main() {
	// variable declared
	int age;
	
	// Ask user to prompt their age
	cout << "Enter your age: ";
	cin >> age;

	// if, else if, and else branches
	if (age < 0) {
		cout << "Invalid age entered. Age cannot be negative." << endl;
	}
	else if ((age >= 0) && (age <= 12)) {
		cout << "You are a Child." << endl;
	}
	else if ((age >= 13) && (age <= 19)) {
		cout << "You are a Teenager." << endl;
	}
	else if ((age >= 20) && (age <= 64)) {
		cout << "You are an Adult." << endl;
	}
	else {
		cout << "You are a Senior Citizen." << endl;
	}
	
	return 0;
}