// Christopher Marble
// CIS 135
// Lab 9

#include <iostream>
using namespace std;

char capit(char *somechar);


int main()
{
	char char1, char2;
	cout << "Please enter a letter to be capitalized: ";
	cin >> char1 >> char2;

	cout << "Your letter before capitalization is  " << char1 << endl;
	cout << "Your letter after capitalization is " << capit(&char1) << endl;

	cout << "Your second letter before capitalization is " << char2 << endl;
	cout << "Your second letter after capitalization is " << capit(&char2) << endl;


	system("pause");
	return 0;
}

char capit(char *somechar)
{
	if(*somechar >= 97)
		*somechar = *somechar - 32;
	return *somechar;
}