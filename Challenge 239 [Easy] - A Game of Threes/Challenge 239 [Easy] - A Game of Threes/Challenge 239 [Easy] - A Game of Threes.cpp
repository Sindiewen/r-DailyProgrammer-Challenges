// Challenge 239 [Easy] - A Game of Threes.cpp : Defines the entry point for the console application.
//

///<Summary>
/*\
	The input is a single number: the number at which the game starts. Write a program that plays the Threes game, and 
	outputs a valid sequence of steps you need to take to get to 1. Each step should be output as the number you start 
	at, followed by either -1 or 1 (if you are adding/subtracting 1 before dividing), or 0 (if you are just dividing). 
	The last line should simply be 1.
*/
///</Summary>

// Preprocessors
//#include "stdafx.h"
#include <iostream>

//Namespace
using namespace std;

// Function Prototypes
int Threes(int num);


int main()
{
	// Number
	long int number = 57;
	int numberOfRuns = 0;
	
	cout << "Initial number: " << number << endl;
	
	//Threes(number);
	
	// While number is not 1
	while (number != 1)
	{
		// If number / 3 evenly
		if (number / 3)
		{
			// Divides number by 3
			
			number /= 3;
		}
		// If number can be divided by 3 by adding 1
		else if ((number + 1) / 3 )
		{
			// Divides number by 3 by adding 1 to it
			number = (number + 1) / 3;
		}
		// Else...
		else
		{
			// Subtract number by 1 to divide by 3
			number = (number - 1) / 3;
		}
		
		// Iterates number of runs
		numberOfRuns++;
		
		// Prints the current number
		cout << number << endl;
		
	}
	
	cout << "Number of Runs: " << numberOfRuns << endl;
	cout << number;
	
	return 0;
	
}

int Threes(int num)
{
	if (num == 1)
	{
		cout << num << endl;
	}
	// If number divides by 3 evenly
	if (num / 3)
	{
		Threes(num / 3);
		cout << num << endl;
	}
	// Divdes evenly if 1 is added
	else if ((num + 1) / 3)
	{
		num = Threes((num + 1) / 3);
		cout << num << endl;
	}
	else
	{
		num = Threes((num - 1) / 3);
		{
			Threes((num - 1) / 3);
			cout << num << endl;
		}
	}
	
	return num;
	
	
}














