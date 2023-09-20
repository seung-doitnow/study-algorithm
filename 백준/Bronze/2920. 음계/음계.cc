#include <iostream>

using namespace std;

int main()
{
	int ascending = 0;
	int descending = 0;
	for (int i = 1; i <= 8; i++)
	{
		int number = 0;
		cin >> number;

		if (i == number)
			ascending++;
		else if (9 - i == number)
			descending++;
	}

	if (ascending == 8)
		cout << "ascending";
	else if (descending == 8)
		cout << "descending";
	else
		cout << "mixed";
}