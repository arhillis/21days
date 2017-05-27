// Day3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

typedef unsigned short int uShort;
typedef const int conint;

int main()
{
	cout << "The size of an int is: \t\t" << sizeof(int) << " bytes.\n";
	cout << "The size of a short int is: \t" << sizeof(short) << " bytes.\n";
	cout << "The size of a long int is: \t" << sizeof(long) << " bytes.\n";
	cout << "The size of a char is: \t\t" << sizeof(char) << " bytes.\n";
	cout << "The size of a float is: \t" << sizeof(float) << " bytes.\n";
	cout << "The size of a double is: \t" << sizeof(double) << " bytes.\n";
	cout << "The size of a bool is: \t\t" << sizeof(bool) << " bytes.\n";
	cin.get();

	uShort Width = 5, Length;
	Length = 10;

	//Create an unsigned short int and intialize of multiplying Length times Width

	uShort Area = Length * Width;

	cout << "Length: \t" << Length << endl;
	cout << "Width: \t\t" << Width << endl;
	cout << "Area: \t\t" << Length << endl;
	cin.get();

	uShort usgned = 65535;

	cout << "Small number: \t" << usgned << endl;
	usgned++;
	cout << "Small number: \t" << usgned << endl;
	usgned++;
	cout << "Small number: \t" << usgned << endl;
	usgned++;
	cin.get();

	short int sgned = 32767;

	cout << "Small number: \t" << sgned << endl;
	sgned++;
	cout << "Small number: \t" << sgned << endl;
	sgned++;
	cout << "Small number: \t" << sgned << endl;
	sgned++;
	cin.get();
	
	for (int i = 32; i < 128; i++) {
		cout << (char)i << "\t";
	}

	for (int i = 32; i < 128; i++) {
		cout << (char)i << "\t";
	}
	cin.get();

	//If you use an unsigned char, the computer already knows to ouput a character.
	for(unsigned char i = 32; i < 128; i++) {
		cout << i << "\t";
	}
	cin.get();

	enum Days {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

	Days today = Monday;

	if (today == Saturday || today == Sunday)
		cout << "Got slammed at work today!";
	else
		cout << "It was kinda slow today.";

	cin.get();

	conint Sun = 0;
	conint Mon = 1;
	conint Tue = 2;
	conint Wed = 3;
	conint Thur = 4;
	conint Fri = 5;
	conint Sat = 6;

	int hoy = Sat;

	if (hoy == Sat || hoy == Sun)
		cout << "Got slammed at work today!";
	else
		cout << "It was kinda slow today.";

	cin.get();

    return 0;
}

