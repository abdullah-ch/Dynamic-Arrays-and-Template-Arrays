// ConsoleApplication104.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <array>

void DYNAMIC_ARRAY(int *House, int  &Size_1, int *Dexter, int &Size_2)
{
	int counter = 0;
	int Size_3 = Size_1;


	int *Union = new int[Size_3];

	cout << " The SIze of Union's array is " << Size_3 << endl;


	int NEW_SIZE = 0;
	
	for (int i = 0; i < Size_2; i++) // checking if the elements of House 2 and House 1 are equal or not...if not equal then that distinct one will give the valve
		// of counter to that of size of House 1....
	{
		for (int j = 0; j < Size_1; j++)
		{
			if (Dexter[i] != House[j])
			{
				counter++;
			}
			if (counter == Size_1) // if this is done than size of resultant array will become the sum of House 1  and  that of counter 

			{
				Size_3++;
			}


		}
		counter = 0;
	}


	NEW_SIZE = Size_3 - Size_1; // this will give the size of the elements that will bee added
	int W = 0;
	int * Final_Array = new int[NEW_SIZE];
	for (int i = 0; i < Size_2; i++)
	{
		for (int j = 0; j < Size_1; j++)
		{
			if (Dexter[i] != House[j])
			{
				counter++;
			}
			if (counter == Size_1)
			{
				Final_Array[W] = Dexter[i]; // our final distinct elements will be addded in this one
				W++;
			}


		}
		counter = 0;
	}

	for (int i = 0; i <Size_1; i++)
	{
		Union[i] = House[i];
	}

	int x = 0;
	for (int i = Size_1; i < Size_3; i++)   // appending them............
	{
		Union[i] = Final_Array[x];
		x++;
	}

	cout << "Here's the element of the Union array" << endl;
	for (int i = 0; i < Size_3; i++)
	{
		cout << Union[i] << endl;
	}


}


void CLASS_ARRAY(array<int, 6>House, array<int, 6>Dexter)//function which gives union
{
	array<int, 12>UNIIIIOOON = { 0 };
	int SIZE___1 = 6, SIZE__2 = 6, SIZE__3 = 12;
	int DAT_INDEX = 0;



	for (int i = 0; i < SIZE___1; i++)//stores the values of first House in the union House
	{
		uni[i] = House[i];
	}
	DAT_INDEX = SIZE___1;
	bool CONDITION;
	cout << endl;

	for (int i = 0; i < SIZE__2; i++)//stores values of 2nd House
	{
		CONDITION = false;

		for (int j = 0; j < SIZE___1; j++)//for comparing House 1 values with second House
		{
			if (Dexter[i] == House[j])//checks if the value of 2nd House matches with the 1st one ,makes CONDITION true then else CONDITION remains false 
			{
				CONDITION = true;
			}
		}
		if (!CONDITION)//only runs when elements of set 2 are not in set 1
		{
			UNIIIIOOON[DAT_INDEX] = Dexter[i];
			DAT_INDEX++;
		}
	}
	cout << " THE Union is.............. " << endl;
	for (int print : UNIIIIOOON)//prints output
	{
		if (print > 0)//Give all the only non zero values

		{
			cout << print << endl;
		}
	}
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

	/*array<int, 6>House = { 0 };
	array<int, 6>Dexter = { 0 };

	cout << "Enter 1st House: " << endl;
	for (int i = 0; i < 6; i++)//loop for input 1
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
	cout << "Enter 2nd House: " << endl;

	for (int u = 0; u < 6; u++)//loop for input 2
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

	CLASS_ARRAY(House, Dexter);//function call   */


}
