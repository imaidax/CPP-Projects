// Christopher Marble
// CIS 135
// Lab 9 Question 2

#include <iostream>
using namespace std;

int main()
{
	int i;
	double miles[10] = { 240.5, 300.0, 189.6, 310.6, 280.7, 216.9, 199.4, 160.3, 177.4, 192.3 };
	double gallons[10] = { 10.3, 15.6, 8.7, 14, 16.3, 15.7, 14.9, 10.7, 8.3, 8.4 };
	double mpg[10];

	double *milesPt, *galPt, *mpgPt;
	milesPt = &miles[0];
	galPt = &gallons[0];
	mpgPt = &mpg[0];

	for (i = 0; i < 10; i++)
	{
		*(mpgPt + i) = (*(milesPt + i) / *(galPt + i));
		cout << *(mpgPt + i)<< endl;
	}

	system("pause");
	return 0;
}