#include "stdafx.h"
#include <iostream>
#include <array>
using namespace std;

void CLASS_ARRAY(array<int, 5>HOUSE, array<int, 5>DEXTER)
{

	array<int, 12>UNIFICATION = { 0 };
	int SIZE__1 = 5; 
	 int SIZE__3 = 10;
	int DAT_INDEX = 0;
		int SIZE__2 = 5;

	bool CONDITION; // this condition will help us later..whether to use which condition or not...........
	cout << endl;

	for (int i = 0; i < SIZE__2; i++)//stores the elements which are not common on both of the sets
	{
		CONDITION = false;

		for (int j = 0; j < SIZE__1; j++)//for comparing HOUSE 1 values with second HOUSE
		{
			if (DEXTER[j] == HOUSE[i])//check whether condition is true or not...bro 
			{
				CONDITION = true;
			}
		}
		if (!CONDITION)//executes if the value in 2nd HOUSE arent present in 1st HOUSE
		{
			UNIFICATION[DAT_INDEX] = HOUSE[i];
			DAT_INDEX++;
		}
	}
	cout << "The Compliment result ISSSSSSSS " << endl;
	for (int DEEKHIYE : UNIFICATION)//prints output
	{
		if (DEEKHIYE > 0)//print only non zero values

		{
			cout << DEEKHIYE << endl;
		}
	}
}

void BLODDY_COMPLIMENt(int *HOUSE, int &SIZE_1, int *Dexter, int  &SIZE_11)
{
	int  b;
		int	c;
		int d;
		int i;
		int j;
		int		k;
		int	m;
		// these variables will help us in for arrays...later arrays.......
		int 	n;
		int 	x;
		int 	y;
	int 	z;
	
	int Dat_INDEX = 0;
	int* counter = new int[SIZE_11];
	for (n = 0; n < SIZE_11; n++)
	{
		counter[n] = 0;
	}
	int* cvalue = new int[SIZE_11];

	for (k = 0; k < SIZE_11; k++)
	{
		for (z = 0; z < SIZE_1; z++)
		{
			if (HOUSE[z] == Dexter[k])
			{
				counter[k]++;
				Dat_INDEX++;
			}
		}
	}
	int* iarray = new int[Dat_INDEX];
	if (SIZE_11 <= SIZE_1)
	{
		for (k = 0; k < SIZE_11; k++)
		{
			for (z = 0; z < SIZE_1; z++)
			{
				if (HOUSE[z] == Dexter[k])
				{
					iarray[k] = HOUSE[z];
				}
			}
		}
	}
	else if (SIZE_1 < SIZE_11)
	{
		for (k = 0; k < SIZE_1; k++)
		{
			for (z = 0; z < SIZE_11; z++)
			{
				if (HOUSE[z] == Dexter[k])
				{
					iarray[k] = HOUSE[z];
				}
			}
		}
	}

	int ab, i1, j1 = 0, t, t1, scounter = 0;
	ab = SIZE_1 - Dat_INDEX;
	int* COMPLIMENT_ARRAY = new int[ab]; // in this loop all the elements in set A are checked against SET B....
//	if they are not same they are stored in an other array....and their size is equal to the size of whole array of their intersection - that of common ones..
	for (t = 0; t < SIZE_1; t++)
	{
		for (t1 = 0; t1 < Dat_INDEX; t1++)
		{
			if (HOUSE[t] != iarray[t1])
			{
				scounter++;
			}
			if (scounter == Dat_INDEX)
			{
				COMPLIMENT_ARRAY[j1] = HOUSE[t];
				j1++;
			}
		}
		scounter = 0;
	}
	cout << "(YOURSOCALLED)' DAMN SET...COMPLIMENT is .................... " << endl;
	for (i1 = 0; i1 < ab; i1++)
	{
		cout << COMPLIMENT_ARRAY[i1] << endl;
	}

}

int main()
{
	int SIZE_1, SIZE_11;
	cout << "Enter the SIZE_1 of UNIVERSAL SET" << endl;
	int i = 0;
	int j = 0;
	int x = 0;
	int y = 0;
	int n = 0;
	cin >> SIZE_1;
	cout << "Enter the SIZE OF YOUR BLOODY SET" << endl;
	cin >> SIZE_11;

	int* HOUSE = new int[SIZE_1];
	cout << "Enter the elements of UNIVERSAL SET" << endl;
	for (i = 0; i < SIZE_1; i++)
	{
		cin >> HOUSE[i];
		for (j = 0; j < i; j++)
		{
			if (HOUSE[i] == HOUSE[j])
			{
				cout << "This is not a set" << endl;
				cout << "Enter again" << endl;
				cin >> HOUSE[i];
			}
		}
	}

		int* Dexter = new int[SIZE_11];
	cout << "Enter the elements of YOUR DAMN SET" << endl;
	for (x = 0; x < SIZE_11; x++)
	{
		cin >> Dexter[x];
		for (y = 0; y < x; y++)
		{
			if (Dexter[x] == Dexter[y])
			{
				cout << "This is not a set" << endl;
				cout << "Enter again" << endl;
				cin >> Dexter[x];
			}
		}
	}


	BLODDY_COMPLIMENt(HOUSE, SIZE_1, Dexter, SIZE_11);










	/* array<int, 5>HOUSE = { 0 };
	array<int, 5>DEXTER = { 0 };

	cout << "Enter 1st HOUSE: " << endl;
	for (int i = 0; i < 5; i++)//loop for input 1
	{

		cin >> HOUSE[i];
		for (int j = 0; j < i; j++)
		{

			if (HOUSE[i] == HOUSE[j])//CONDITIONtion to check that user enters no same value twice
			{
				cout << "Duplicate elements not allowed! Please enter unique values:" << endl;
				cin >> HOUSE[i];
			}
		}
	}
	cout << "Enter 2nd HOUSE: " << endl;

	for (int u = 0; u < 5; u++)//loop for input 2
	{

		cin >> DEXTER[u];
		for (int j = 0; j < u; j++)
		{

			if (DEXTER[u] == DEXTER[j])//same as above loop
			{
				cout << "Duplicate elements not allowed! Please enter unique values:" << endl;
				cin >> DEXTER[u];
			}
		}

	}


	CLASS_ARRAY(HOUSE, DEXTER); */

}
