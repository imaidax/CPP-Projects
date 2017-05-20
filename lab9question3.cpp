//Christopher Marble
//CIS135
//Lab 9 Problem 3

#include <iostream>
using namespace std;

void sortGrade(double numbers[], int length);

int main()
{
	int num_grades, i;
	double total = 0, average;
	cout << "Please input the number of scores:" << endl;
	cin >> num_grades;

	double *grades = new double[num_grades];
	for (i = 0; i < num_grades; i++)
	{
		cout << "Please enter a score" << endl;
		cin >> grades[i];
		total += grades[i];
	}

	average = total / num_grades;

	cout << "The average of the scores is " << average << endl;

	sortGrade(grades, num_grades);

	system("pause");
	return 0;
}

void sortGrade(double numbers[], int length)
{
	bool flag = true;

	do
	{
		flag = true;
		for (int i = 0; i < length - 1; i++)
		{
			if (numbers[i]>numbers[i + 1])
			{
				double sweeper = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = sweeper;
			}
		}
		for (int i = 0; i < length - 1; i++)
		{
			if (numbers[i]>numbers[i + 1])
			{
				flag = false;
			}
		}
	} while (flag == false);

	cout << endl << endl << "Here are the grades in asdcending order" << endl;

	for (int i = 0; i < length; i++)
	{
		cout << numbers[i] << endl;
	}
}