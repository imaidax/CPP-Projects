// Christopher Marble
// CIS 135
// LAB 8 QUESTION 3

#include <iostream>
using namespace std;

int linearSearch(string list, int size, char key)
{
	int i,occurence = 0;
	for (i = 0; i < size; i++)
	{
		if (list[i] == key) {
			occurence += 1;
			cout << "Search result found in index: " << i << endl;
			cout << "Times found: " << occurence << endl;
		}

	}
	return -1;
}

int main()
{
	string destiny = "How do I even get this to work";

	int size = destiny.length();
	char search;
	cout << destiny;
	cout << "What character are you looking for?" << endl;
	cin >> search;
	linearSearch(destiny, size, search);
	system("PAUSE");
	return 0;
}