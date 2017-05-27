// LAB #12
// Featuring YaoFeng (Woody) Jiang, Christopher, Mage
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct localAirport
{
	int planesLanded; // greatest number of planes that landed in a given that month
	int planesDeparted; // least number of planes that landed in a given that month
	int maxLanded; // max day of landing in a month
	int minLanded; // min day of landing in a month
};

int main()
{
	int i;
	const int MONTH = 12; // total month of a year
	int tLanded = 0;
	int tDepart = 0;
	string monthly[] = { "January", "February", "March", "April", "May", "June", "July", "August", "October", "November", "December" }; // 
	localAirport year[MONTH]; // declaration of struct 

	for (i = 0; i < MONTH; i++)
	{
		cout << "How many planes landed during " << monthly[i] << "?" << endl; // ask user input the airplanes landed in a month
		cin >> year[i].planesLanded;
		cout << "How many planes departed during  " << monthly[i] << "?" << endl; // ask user input the airplanes departed in a month
		cin >> year[i].planesDeparted;
		cout << "What was the most landings you had in a day in " << monthly[i] << "?" << endl; // ask user input the max landing in a day
		cin >> year[i].maxLanded;
		cout << "What was the least landings you had in a day in " << monthly[i] << "?" << endl; // ask user input the min landing in a day
		cin >> year[i].minLanded;

		tLanded += year[i].planesLanded; // calculate the total of the airplane landed
		tDepart += year[i].planesDeparted; // calculate the total of the airplane departured
	}

	cout << "Total airplane landings: " << tLanded << endl;  // display the total airplane landed
	cout << "Total airplane departures: " << tDepart << endl; // display the total airplane departured 
	cout << "Average lands for the year: " << setprecision(2) << tLanded / 12.0 << endl; // display the average of the month that landed
	cout << "Average departures for the year: " << setprecision(2) << tDepart / 12.0 << endl; // display the average of the month that departured


	int minLand = year[0].minLanded; // initilized the min day of landing of a month
	int maxLand = year[0].maxLanded; // initilized the max day of landing of a month
	int maxIndex = 0, minIndex = 0; // index to find the month of the max and min day of landing of a month

	for (i = 0; i < MONTH; i++)
	{
		if (year[i].maxLanded >= maxLand)
		{
			maxLand = year[i].maxLanded;
			maxIndex = i;
		}
		if (year[i].minLanded <= minLand)
		{
			minLand = year[i].minLanded;
			minIndex = i;
		}
	}

	cout << "The most amount of landings took place in " << monthly[maxIndex] << " with " << maxLand << " landings." << endl;
	cout << "The least amount of landings took place in " << monthly[minIndex] << " with " << minLand << " landings." << endl;

	system("PAUSE");
	return 0;
}