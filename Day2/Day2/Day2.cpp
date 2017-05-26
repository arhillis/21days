// Day2.cpp : Defines the entry point for the console application.
//This is the program for Day 2 of "Learn C++ in 21 Days"

#include "stdafx.h"
#include <iostream>

using namespace std;

void demofunct() {
	cout << "In Demo Mode!";
}

int addNums(int a, int b) {
	cout << "In addNums(), recieved " << a << " and " << b;
	cout << "\n Adding them to get " << a + b;
	return a + b;
}

int main()
{
	cout << "In the main function ...";
	cin.get();
	demofunct();
	cin.get();
	cout << "Back to main() ... ";
	cin.get();

	int a, b, c;

	cout << "Enter two numbers ... ";
	cin >> a;
	cin >> b;

	cout << "\nCalling AddNums() ...\n";
	c = addNums(a, b);
	cin.get();

	cout << "\nBack to main() ...\n";
	cout << "c has been set to " << c;
	cout << "\nExiting ...";
	cin.get();

    return 0;
}

