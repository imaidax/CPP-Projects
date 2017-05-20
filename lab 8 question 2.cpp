// Christopher Marble
// CIS 135
// LAB 8 QUESTION 2

#include <iostream>
#include <iomanip>
using namespace std;

int numTemps;
//double highest(double list[50]);
//double lowest(double list[50]);
//double average(double list[50]);

double average(double list[])
{
	double total = 0;
	double averages;

	for (int i = 0; i < numTemps; i++)
	{
		total += list[i];
	}
	averages = total / numTemps;
	return averages;
}

double highest(double list[])
{
	double high = list[0];
	for (int i = 0; i < numTemps; i++)
	{
		if (high< list[i])
			high = list[i];
	}
	return high;
}

double lowest(double list[])
{
	double low = list[0];
	for (int i = 0; i < numTemps; i++)
	{
		if (low > list[i])
			low = list[i];
	}
	return low;
}
int main()
{
	double total_temps[50];

	cout << "Please input the number of temperatures to be read: " << endl;
	cin >> numTemps;

	for (int i = 0; i < numTemps; i++)
	{
		cout << "Input temperature " << i + 1 << " : " << endl;
		cin >> total_temps[i];
	}

	cout << "The average temperature is: " << fixed << setprecision(2) << average(total_temps) << endl;
	cout << "The highest temperature is: " << fixed << setprecision(2) << highest(total_temps) << endl;
	cout << "The lowest temperature i: " << fixed << setprecision(2) << lowest(total_temps) << endl;

	system("PAUSE");
	return 0;
}
