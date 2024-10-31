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

int countVowel(string str);

int main()
{
	string input;
	while (true)
	{
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q")
		{
			break;
		}
		cout << "Vowel Count: " << countVowel(input) << endl;
	}
	
}

int countVowel(string str)
{
	int vowels = 0;
	for (int i = 0; i < str.length(); i++ )
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
		{
			vowels++;
		}
	}
	return vowels;
}