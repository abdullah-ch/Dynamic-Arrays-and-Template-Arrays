// ConsoleApplication102.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <array>

void SIMPLY_ARRAY(int *Dexter, int &SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cin >> Dexter[i]; // seperating each element of the array and then comparing that one with the rest of em to see if they are same or not
		

		for (int j = 0; j < i; j++) 
		{
			if (Dexter[i] == Dexter[j])
			{
				cout << "Duplicate elements not allowed! Please enter unique values:" << endl;
				cin >> Dexter[i]; // taking input again..
			}
		}

	}
}

void CLASS_ARRAY(array<int, 10>&Wilson)
{
	int counter = 0;
	cout << "Enter the elements of the array " << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> Wilson[i];

		for (int j = 0; j < i; j++)
		{   // seperating each element of the array and then comparing that one with the rest of em to see if they are same or not
			if (Wilson[i] == Wilson[j])
			{   // taking input again..
				counter++;
				cin >> Wilson[i];
			}
			
		}

	}

	if (counter > 0) // if counter is greater than 1, this message will be printed........
	{
		cout << "there are duplicates in the array..........please enter again!!!!!1" << endl;
	}

	else
	{
		cout << "ITS OKAYYYYYYYYYYYYYYYYYYYY.....No DUPLICATES" << endl;
	}

	cout << "Here's the printed array is " << endl;
	for (int HOUSE : Wilson)
	{
		cout << HOUSE << endl;
	}
}

int main()
{
	

//	int SIZE;
	//cout << "enter the size u want " << endl;
	//cin >> SIZE;
	//int *Dexter = new int[SIZE];
	array<int, 10>Wilson;
	CLASS_ARRAY(Wilson);
//	SIMPLY_ARRAY(Dexter,SIZE);
}
