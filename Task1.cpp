// ConsoleApplication100.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <array>
using namespace std;

void INSERTION(array<int, 10>&c )
{


	int counter = 0;
	for (size_t i = 0; i < c.size(); i++) // taking iinput till the size is reached
	{
		if (c[i] != '\0')
		{
			counter++;
		}
	}
	cout << "Insert the element" << endl;

	cin >> c[counter];
	cout << "The whole array is  " << endl;
	for (int House : c)
	{
		cout << House << endl;
	}



}

void DELETE(array<int, 10>&c)
{

	int DELETE_DAT_NUMBER;
	cout << "Enter the element which you want to remove " << endl;
	cin >> DELETE_DAT_NUMBER;
	int counter_1 = 0;
	int DAR_DELETED_INDEX = 0;

	for (int i = 0; i < c.size(); i++)
	{
		if (c[i] != '\0')
		{
			counter_1++;
		}
	}
	cout << "TOTAL elements are " << counter_1 << endl;
	for (int i = 0; i < counter_1; i++)
	{
		if (c[i] == DELETE_DAT_NUMBER) // Just finding the number which u want to delete and swapping it until the last digit is obtained and then
		// storing null in it....
		{
			for (int k = i; k < counter_1; k++)
			{
				c[k] = c[k + 1];
			}
			c[counter_1] = '\0';
			counter_1--;
			break;
		}
	}

	cout << "Here's the array after the deletion" << endl;
	for (int Wilson : c)
	{
		cout << Wilson << endl;
	}





}




int main()
{


	char Press;
	cout << "Enter the mode  which you want to use " << endl;
	cout << "Press A to insert , BRO!!!!!" << endl;
	cout << "Press B to Delete , BRO!!!!!" << endl;
	cout << "Press Q to Exit , BRO!!!!!" << endl;
	cin >> Press;
	array<int, 10>c = { 1, 2, 3, 4, 5 };


// switch for making a menu driven prograaaaaaaaaaam

	switch (Press)
	{
	case('A' | 'a') :
		INSERTION(c);
		break;

	case('B' | 'b') :
		DELETE(c);
		break;
	case('Q' | 'q') :
		return 0;
	}
}


