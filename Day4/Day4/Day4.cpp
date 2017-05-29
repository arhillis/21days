// Day4.cpp : Defines the entry point for the console application.
//This program is for Day 4 of "Teach Yourself C++ in 21 Days" by Jesse Libery and Bradley Jones

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	//Listing 4.1 on page 70

	int a=0, b=0, x=0, y=35;
	cout << "a: " << a << "\tb: " << b;
	cout << "\tx: " << x << "\ty: " << y;
	cin.get();

	a = 9;
	b = 7;
	x = y = a + b;

	cout << "a: " << a << "\tb: " << b;
	cout << "\tx: " << x << "\ty: " << y;
	cin.get();


	//Listing 4.2 on page 72

	unsigned int difference;
	unsigned int bigNumber = 100;
	unsigned int smallNumber = 25;

	cout << "\nBig number: " << bigNumber << endl;
	cout << "Small number: " << smallNumber << endl;
	
	difference = bigNumber - smallNumber;
	cout << "Big number - small number: " << difference << endl;

	difference = smallNumber - bigNumber;
	cout << "Small number - big number: " << difference << endl;

	cin.get();
    return 0;
}

