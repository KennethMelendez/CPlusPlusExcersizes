// ChipsNSalsa.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;
vector <int> values;


int main()
{

	/*

	Largest/Smallest Array Values

		Write a program that lets the user enter 
		ten values into an array. 
		The program should then display the largest and 
		smallest values stored in the array.
	
	*/



	// Looping through 10 values
	cout << "Please input 10 Values! We will find the largest and smallest value." << endl;

	// Looping and asking the user to input a value 10 times 
	for (int x = 1; x < 11; x++) 
	{
		int userInput;	
		cout << "Value #" << x << endl;
		cin >> userInput;
		values.push_back(userInput);
	}

	cout << "" << endl;
	cout << "===========" << endl;
	cout << "Values" << endl;
	cout << "===========" << endl;
	cout << "" << endl;

	// displays vector 
	for (int newValues : values) 
	{
		cout << newValues << " ";
	}

	cout << "" << endl;

	// variables for storing largest number and smallest number
	int largestNumber = values.front();
	int smallestNumber = values.front();
	for (int newValues : values)
	{
		if (newValues >= largestNumber) {
			largestNumber = newValues;
		}

		if (newValues <= smallestNumber) 
		{
			smallestNumber = newValues;
		}
	}

	cout << "Your largest number is " << largestNumber << endl;
	cout << "Your smallest number is " << smallestNumber << endl;

	return 0;
}

