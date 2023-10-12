#include <iostream>

using namespace std;

int main()
{
	int min = 100;
	int sum = 0;
	for (int i = 0; i < 7; i++)
	{
		int number;
		cin >> number;

		if (number % 2 != 0)
		{
			if (number < min)
				min = number;

			sum += number;
		}
	}

	if (sum == 0)
		cout << -1;
	else
		cout << sum << '\n' << min;
}