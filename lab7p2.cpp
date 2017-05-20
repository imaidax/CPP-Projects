// Christopher Marble
// CIS 135
// LAB SEVEN PROBLEM 2
// Help from Rafi on this one :) 

#include <iostream>
using namespace std;

float total_charges(float, float);
float total_charges(float, float, float);

int main()
{
	int insurance;
	float service, test, medicine, charges;
	cout << "Please input a one if you are a member of the dental plan"
		<< "\nInput any other number if you are not." << endl;
	cin >> insurance;

	if (insurance == 1)
	{
		cout << "Please input the service charge" << endl;
		cin >> service;
		cout << "Please input the test charges" << endl;
		cin >> test;
		charges = total_charges(service, test);
	}
	else
	{
		cout << "Please input the service charge" << endl;
		cin >> service;
		cout << "Please input the test charges" << endl;
		cin >> test;
		cout << "Please input the medicine charges" << endl;
		cin >> medicine;
		charges = total_charges(service, test, medicine);
	}
	cout << "The total bill is $" << charges << endl;
	system("PAUSE");
}

float total_charges(float service, float test)
{
	float total;
	total = service + test;
	return total;
}
float total_charges(float service, float test,float medicine)
{
	float total;
	total = service + test + medicine;
	return total;
}