// Christopher Marble
// CIS 135
// Lab 8

#include <iostream>
using namespace std;

int main()
{
	int get_age;
	int age[100];
	for (int i = 0; i <= 100; i++)
		age[i] = 0;

	do
	{
		cout << "Please enter an age between from one to 100. Type -99 to stop" << endl;
		cin >> get_age;
		if (get_age > 0 && get_age < 101) 
			age[get_age]++;

	} while (get_age != -99);

	for (int i = 1; i <= 100; i++)
	{
		if (age[i] != 0)
			cout << "The number of people " << i << " years old is " << age[i] << endl;

	}
	system("PAUSE");
	return 0;
}