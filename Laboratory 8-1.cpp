/*
* Program: Laboratory 8-1.cpp
* Author: Aanika Mishra
* Date: 10-31-2024
* Description:
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int countCharacter(string str);

int main()
{
	string input;
	cout << "Enter a string or Q to quit: ";
	getline(cin, input);

	cout << "There are " << countCharacter(input) << " characters" << endl;;
}

int countCharacter(string str)
{
	int characters;
	characters = str.length();
	return characters;
}