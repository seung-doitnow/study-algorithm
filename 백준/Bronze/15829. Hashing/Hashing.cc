#include <iostream>

using namespace std;

int main()
{
	int length;
	char string[51];
	cin >> length >> string;

	int hashValue = (int)(string[0]) - 'a' + 1;
	for (int i = 1; i < length; i++)
	{
		int digit = (int)(string[i]) - 'a' + 1;
		int power = 31;
		for (int j = 1; j < i; j++)
			power = power * 31 % 1234567891;

		hashValue += digit * power % 1234567891;
	}

	cout << hashValue;
}