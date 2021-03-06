// ChipsNSalsa.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

/*
Chips and Salsa

Write a program that lets a maker of chips and salsa keep 
track of sales for five different types of salsa: mild, medium, sweet, 
hot, and zesty. The program should use two parallel 
5-element arrays: an array of strings that holds the five salsa names, 
and an array of integers that 
holds the number of jars sold during the 
past month for each salsa type. The salsa names should be stored using an
initialization list at the time the name array is created. 
The program should prompt the user to enter the number 
of jars sold for each type. Once this sales data has been entered, 
the program should produce a report that displays sales for 
each salsa type, total sales, and the names of the highest 
selling and lowest selling products.

*/


int main(void)
{

	//Simulating a database that keeps salsa sales
	// Maps stores key value pairs
	map<string, int> SalsaSalesDatabase;
	string salsaTypes[] = {"Mild", "Medium" ,"Sweet", "Hot", "Zesty"};

	// Prints Introduction
	cout << "=== Chips and Salsa Sales Tracker ===" << endl;
	cout << "Please input sales for each product." << endl;
	cout << "" << endl;


		for (int prompts = 0; prompts < size(salsaTypes); prompts++)
		{
			// Prompting user to input sales for current salsa in the array thats being looped
			cout << "Please input sales for " << salsaTypes[prompts] << " Salsa." << endl;
			
			// getting the user input and storing it into a sales variable
			int userResponseSalesNum;
			cin >> userResponseSalesNum;

			// adding it into the c++ map as a key and value
			SalsaSalesDatabase.insert(pair <string, int>(salsaTypes[prompts], userResponseSalesNum));
		}
		cout << "" << endl;
		cout << "=== Salsa Sales Order Numbers ===";
		cout << "" << endl;

		int totalSalsaSales = 0;
		// getting an element from the map in order to compare
		int smallestValue = SalsaSalesDatabase.find("Mild")->second; // second means value of the map (sales)
		int highestValue = SalsaSalesDatabase.find("Mild")->second;
		string lowestSalesProduct = "";
		string highestSalesProduct = "";
		for (auto const& salsaSaleMapEntry : SalsaSalesDatabase)
		{
			// printing out the KEY (salsaSaleMapEntry.first) and VALUE of the map (salsaSaleMapEntry.second)
			cout << salsaSaleMapEntry.first << " Sales: " << salsaSaleMapEntry.second << endl;
			// getting the total number of sales
			totalSalsaSales += salsaSaleMapEntry.second;
			// finding the lowest amount of sales
			if (salsaSaleMapEntry.second <= smallestValue) {
				smallestValue = salsaSaleMapEntry.second;
				lowestSalesProduct = salsaSaleMapEntry.first;
			}

			if (salsaSaleMapEntry.second >= highestValue)
			{
				highestValue = salsaSaleMapEntry.second;
				highestSalesProduct = salsaSaleMapEntry.first;
			}

		}

		cout << "" << endl;
		cout << "Total Sales : " << totalSalsaSales << endl;
		cout << "Lowest Sales Product: " << lowestSalesProduct << " Salsa | Sales: " << smallestValue << endl;
		cout << "Highest Sales Product: " << highestSalesProduct << " Salsa | Sales: " << highestValue << endl;

}

