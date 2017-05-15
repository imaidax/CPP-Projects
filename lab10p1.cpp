#include <iostream>
#include <fstream>
#include <cstdlib>   // needed for exit()
#include <string>    // needed for the string class
using namespace std;

int main()
{
	string filename = "info.dat";  // put the filename up front
	string name,ssn;
	double hourly_rate, gross_pay;
	int hours;

	ifstream inFile;

	inFile.open(filename.c_str());

	if (inFile.fail())  // check for successful open
	{
		cout << "\nThe file was not successfully opened"
			<< "\n Please check that the file currently exists."
			<< endl;
		exit(1);
	}

	// read and display the file's contents
	inFile >> name >> ssn >> hourly_rate >> hours;
	while (inFile.good()) // check next character
	{
		cout << name << ' ' << ssn << ' ' <<  hourly_rate << ' ' << hours << ' ' << "total pay: " << hours*hourly_rate << endl;
		inFile >> name >> ssn >> hourly_rate >> hours; // read file again
	}

	inFile.close();

	system("PAUSE");
	return 0;
}