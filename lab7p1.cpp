// Christopher Marble
// CIS 135
// Lab 7

#include <iostream>
using namespace std;
void welcome();
void swap(int, int);
void sum(int, int);


int main()
{
	int firstnum, secnum;
	welcome();

	cout << "Enter your first number, then hit enter." << endl;
	cin >> firstnum;
	cout << "\nEnter your second number, then hit enter." << endl;
	cin >> secnum;

	swap(firstnum, secnum);
	sum(firstnum, secnum);

	system("PAUSE");

	return 0;
	
}

void welcome()
{
	cout << "Welcome to the number swapper!" << endl;
}

void swap(int firstnum, int secnum)
{
	int swapper;
	swapper = firstnum;
	firstnum = secnum;
	secnum = swapper;

	cout << "You input the number as " << firstnum << " and " << secnum << endl;
	cout << "After swapping, the first number now has a value of " << firstnum << " which was the value of the second number" << endl;
	cout << "The second number has the value of " << secnum << " which was the value of the first number." << endl;
}

void sum(int firstnum, int secnum)
{
	int total;
	total = firstnum + secnum;
	cout << endl << "The sum of your two numbers is " << total << endl;
}