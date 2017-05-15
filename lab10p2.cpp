// Christopher Marble, Woody Jiang, 
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	string filename = "numbers.dat";
	int num,num_file;
	double total = 0,average = 0;
	ifstream inFile(filename);
	if (inFile.fail())   // check for successful open
	{
		cout << "\nThe file was not successfully opened"
			<< "\n Please check that the file currently exists"
			<< endl;
	}
	cout << filename << " has been opened\n";

	while (!inFile.eof())
	{
		total = 0;
		inFile >> num_file;
		for (int i = 0; i < num_file; i++)
		{
			inFile >> num;
			total = total + num;
		}
		average = total / num_file;
		cout << average;
		cout << endl;
	}

	inFile.close();
	cout << filename << " has been closed."<< endl;

	system("PAUSE");
	return 0;
}

