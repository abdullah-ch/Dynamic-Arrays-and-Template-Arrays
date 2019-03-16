#include "stdafx.h"

#include <iostream>
using namespace std;
int main()

{

	// inputting 3 arrays...

	int Size_1;
	cout << "Enter the size of SIZE 1" << endl;
	cin >> Size_1;
	int Size_2;
	cout << "Enter the size 2" << endl;
	cin >> Size_2;
	int *House = new int[Size_1];
	int *Dexter = new int[Size_2];
	cout << "Enter 1st HOUSE: " << endl;
	for (int i = 0; i < Size_1; i++)//loop for input 1
	{

		cin >> House[i];
		for (int j = 0; j < i; j++)
		{

			if (House[i] == House[j])//CONDITIONtion to check that user enters no same value twice
			{
				cout << "Duplicate elements not allowed! Please enter unique values:" << endl;
				cin >> House[i];
			}
		}
	}
	cout << "Enter 2nd HOUSE: " << endl;

	for (int u = 0; u < Size_2; u++)//loop for input 2
	{

		cin >> Dexter[u];
		for (int j = 0; j < u; j++)
		{

			if (Dexter[u] == Dexter[j])//same as above loop
			{
				cout << "Duplicate elements not allowed! Please enter unique values:" << endl;
				cin >> Dexter[u];
			}
		}

	}


	int counter = 0;

	int Size_3 = 0;

	int v = 0;
	int b = 0;
	bool Condition = false;

	int W = 0;
	int * Final_Array = new int[Size_3];
	for (int i = 0; i < Size_1; i++)
	{
		for (int j = 0; j < Size_2; j++)
		{
			if (House[i] != Dexter[j])
			{

				counter++;
			}
			if (counter == Size_2)
			{
				Final_Array[W] = House[i]; // our final distinct elements will be addded in this one
				W++;
				v++;
			}


		}
		counter = 0;
	}






				{


					cout << "Here's the element of the A - B  array" << endl;
					for (int i = 0; i < W; i++)
					{
						cout << Final_Array[i] << endl;
					}
				}






}


