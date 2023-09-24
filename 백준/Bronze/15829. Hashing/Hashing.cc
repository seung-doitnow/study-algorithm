#include <iostream>

using namespace std;

int main()
{
	int length;
	char string[51];
	cin >> length >> string;

	long long hashValue = 0;
	long long multipleValue = 1;
	for (int i = 0; i < length; i++)
	{
		int digit = (int)(string[i]) - 'a' + 1;

		hashValue = hashValue + ((digit * multipleValue) % 1234567891);

		multipleValue = (multipleValue * 31) % 1234567891;
	}

	cout << hashValue % 1234567891;
}