// CHristopher Marble
// CIS135
// LAB 4 QUESTION 5

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char selection;
	float price, paid, change;
	bool run = true;


	cout << "Welcome to the super Vending Machine" << endl;
	cout << "------------------------------------" << endl;
	cout << "a) Water" << setw(28) << "$1.25" << endl;
	cout << "b) Soda" << setw(29) << "$2.00" << endl;
	cout << "c) Diet Soda" << setw(24) << "$2.25" << endl;
	cout << "d) Coffee" << setw(27) << "$1.00" << endl;
	cout << "e) Energy Drink" << setw(21) << "$3.25" << endl;
	cout << "f) Milk" << setw(29) << "$2.50" << endl;
	cout << "g) Orange Juice" << setw(21) << "$2.75" << endl << endl << endl;
	cout << "Make your selection." << endl;
	cin >> selection;
	switch (selection)
	{
	case 'a':
		price = 1.25;
		break;
	case 'b':
		price = 2.00;
		break;
	case 'c':
		price = 2.25;
		break;
	case 'd':
		price = 1;
		break;
	case 'e':
		price = 3.25;
		break;
	case 'f':
		price = 2.5;
		break;
	case 'g':
		price = 2.75;
		break;
	default:
		cout << "Invalid selection";
		run = false;
	}

	if (run == true)
	{
		cout << "Your total is $" << price << endl;
		cout << "Please enter the amount you're going to pay: $";
		cin >> paid;
		change = paid - price;

		if (paid < price)
			cout << "You didn't pay enough.";
		else if (paid == price)
			cout << "Thank you! Enjoy your beverage!";
		else if (paid > price)
			cout << "Your change is $" << fixed << setprecision(2) << change << endl;


	}

	system("PAUSE");
	return 0;

}