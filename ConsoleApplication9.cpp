//
//  main.cpp
//  Chapter10
//
//  Created by Zachary Dorow on 2/26/17.
//  Copyright © 2017 Zachary Dorow. All rights reserved.
//
#include "stdafx.h"
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
void upper(char*, int);
void lower(char*, int);
void reverse(char*, int);
int main() {
	const int SIZE = 5;
	char input[SIZE];
	cout << "Please input 4 letters, some uppercase and some lowercase: \n";
	cin.getline(input, SIZE);

	char *letterArrayPtr;
	letterArrayPtr = input;

	cout << "The original input is: " << input << "\n";
	upper(letterArrayPtr, SIZE);
	lower(letterArrayPtr, SIZE);
	reverse(letterArrayPtr, SIZE);
	system("pause");
	return 0;
}
//Upper function
void upper(char *OldLetters, int count)
{
	char *NewLettersPtr;
	NewLettersPtr = new char[count];
	for (int x = 0; x < count; x++)
	{
		*(NewLettersPtr + x) = *(OldLetters + x);
	}
	for (int x = 0; x < count; x++)
	{
		NewLettersPtr[x] = toupper(NewLettersPtr[x]);
	}
	cout << "The string upper: " << NewLettersPtr << "\n";
	delete[] NewLettersPtr;
}
//Lower function
void lower(char *OldLetters, int count)
{
	char *NewLettersPtr;
	NewLettersPtr = new char[count];
	for (int x = 0; x < count; x++)
	{
		*(NewLettersPtr + x) = *(OldLetters + x);
	}

	for (int x = 0; x < count; x++)
	{
		NewLettersPtr[x] = tolower(NewLettersPtr[x]);
	}
	cout << "The string lower: " << NewLettersPtr << "\n";
	delete[] NewLettersPtr;
}
//Reverse function
void reverse(char *OldLetters, int count)
{
	char *NewLettersPtr;
	NewLettersPtr = new char[count];
	for (int x = 0; x < count; x++)
	{
		*(NewLettersPtr + x) = *(OldLetters + x);
	}	
	for (int x = 0; x < count; x++)
	{
		if (islower(*(NewLettersPtr + x)))
			(*(NewLettersPtr + x)) = toupper(*(NewLettersPtr + x));
		else
			(*(NewLettersPtr + x)) = tolower(*(NewLettersPtr + x));
	}

	cout << "The string in reverse: " << NewLettersPtr << "\n";
	delete [] NewLettersPtr;
}

