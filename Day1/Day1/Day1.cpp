// Day1.cpp : Defines the entry point for the console application.
//The is the program for Day 1 of "Learn C++ in 21 Days"

#include "stdafx.h"
#include <iostream>

using namespace std;

int sum(int a, int b) {
	return a + b;
}

int main()
{
	cout << "Hello there. \n";
	cout << "Here is 5: " << 5 << "\n";
	cout << "The manipulator, endl, \n";
	cout << " writes a new line to the screen." << endl;
	cout << "Here is a very big number: \t" << 70000;
	cout << endl;
	cout << "Here is the sum of eight and five: \t";
	cout << sum(8, 5) << endl;
	cout << "Here is a fraction: \t\t";
	cout << (float)5 / 8 << endl;
	cout << "And a very big number: \t";
	cout << (double)7000 * 7000 << endl;
	cout << "Don't forget to replace Jesse Liberty";
	cout << " with your name ........." << endl;
	cout << "Ann Hillis is a C++ programmer!!!";
	cin.get();
    return 0;
}

