/*
Chapter 3 Lab: The Simple Login System
Name: Erick Arambulo
Date: 10th June 2025
Description: The purpose for this lab is to have user input their username and password
to match with myUser123 as username and SecurePass! as password.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Variables declared and initialized with const
	const string VALID_USERNAME = "myUser123";
	const string VALID_PASSWORD = "SecurePass!";

	// Variables declared for users to input their username and password
	string username;
	string password;

	// Prompt users to input their username and password;
	cout << "Enter your username: ";
	cin >> username;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Enter your password: ";
	getline(cin, password);

	// if and else branches
	if ((username == VALID_USERNAME) && (password == VALID_PASSWORD)) {
		cout << "Login successful! Welcome." << endl;
	}
	else {
		cout << "Login failed. Invalid username or password." << endl;
	}

	return 0;
}