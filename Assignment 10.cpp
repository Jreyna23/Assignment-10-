// Pointers.cpp : Defines the entry point for the console application.
//Create a new console project C++ program.
//Create at least two pointers in main that point at variables with at least two different data types.
//Make your program uses more than one function.
//In one or more function(s), pass a pointer into the function.
//In one or more function(s), return a pointer from the function.
//Use and assin the returned pointer in your code.
//Come up with a creative program
//Your program should do something, in addition to demonstrate your knowledge of pointers.
//Your main function should control all the other functions.
//Comment your source code file(.CPP) well.
//Once the program is working have tested it a few times, create a new repository in your GitHub account for your program.
//Add your solution and files to your new Repository on GitHub.
//Take a screenshot of this project in GitHub.
//Take a screenshot of the program working.

#include "stdafx.h"
#include <iostream>

using namespace std;
//function protyping 
void swap1(int x, int y);
void swap2(int*const px, int*const py);
int main()
{
	//Starting Values 
	int Player = 200;
	int Enemy = 300;
	//Prints out the starting Values 
	cout << "Here is the HP for you and the enemy: \n";
	cout << "----------------\n";
	cout << "Player 1: " << Player << "\n";
	cout << "Enemy: " << Enemy << "\n\n";
	cout << "----------------\n";
	//Prints out the badSwap Variable 
	cout << "Calling swap1: \n";
	cout << "Player 1: " << Player << "\n";
	cout << "Enemy: " << Enemy << "\n\n";
	cout << "----------------\n";
	//Prints out goodSwap Variable 
	cout << "Calling swap2: \n";
	swap2(&Player, &Enemy);
	cout << "Player 1: " << Player << "\n";
	cout << "enemy: " << Enemy << "\n\n";

	//Pauses Program
	system("pause");

	return 0;
}
//This is where the points come into use with store the information from the variable prototyping that we did at the start of the program
void swap1(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void swap2(int* const pX, int* const pY)
{
	int temp = *pX;
	*pX = *pY;
	*pY = temp;
}