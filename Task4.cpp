// ConsoleApplication104.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <array>

void DYNAMIC_ARRAY(int *House, int  &Size_1, int *Dexter, int &Size_2)
{

	int counter = 0;
	for (int i = 0; i < Size_2; i++)
	{
		for (int j = 0; j < Size_1; j++)
		{
			if (House[i] == Dexter[j])
			{
				counter++;
			}
		}
	}

	int * INTERSECTION = new int[counter];
	int b = 0;
	for (int i = 0; i < Size_2; i++)
	{
		for (int j = 0; j < Size_1; j++)
		{
			if (House[i] == Dexter[j])
			{
				INTERSECTION[b] = Dexter[j];
				b++;
			}
		}
	}

	cout << "Here;s the array of intersection" << endl;
	for (int i = 0; i < counter; i++)
	{
		cout << INTERSECTION[i] << endl;
	}


}

void CLASS_ARRAY(array<int, 6>HOUSE, array<int, 6>DEXTER)//function which gives intersection
{
	array<int, 6>Ronaldo = { 0 };
	int DAT_INDEX = 0;
	for (int y = 0; y < 6; y++)//loop which will find which elements are intersected with each other and thus stores them.....
		for (int r = 0; r < 6; r++)
		{
		if (HOUSE[y] == DEXTER[r])//comparing condition
		{
			Ronaldo[DAT_INDEX] = HOUSE[y];
			DAT_INDEX++;
		}

		}
	cout << endl;
	cout << "Intersection of the two HOUSEs is: " << endl;

	for (int DEEKHIYE : Ronaldo)//prints the array if there are intersecting elements 
	{
		if (DEEKHIYE != 0)//checks if there are any non zero elemetns(intersecting ones) in the array and prints them
		{
			cout << DEEKHIYE << ",";
		}
	}
	cout << endl;


}

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
	DYNAMIC_ARRAY(House, Size_1, Dexter, Size_2); 


/*	array<int, 6>HOUSE = { 0 };
	array<int, 6>DEXTER = { 0 };

	cout << "Enter 1st HOUSE: " << endl;
	for (int i = 0; i < 6; i++)//loop for input 1
	{

		cin >> HOUSE[i];

	}
	cout << "Enter 2nd HOUSE: " << endl;
	for (int u = 0; u < 6; u++)//loop for input 2
	{

		cin >> DEXTER[u];

	}

	CLASS_ARRAY(HOUSE, DEXTER);//function call   */


}
