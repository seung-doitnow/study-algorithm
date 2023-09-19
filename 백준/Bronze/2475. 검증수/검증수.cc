#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		int number = 0;
		cin >> number;

		sum += number * number;
	}

	cout << sum % 10;
}