#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int numbers[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> numbers[i];

		sum += numbers[i];
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = i; j < 5; j++)
		{
			if (numbers[i] > numbers[j])
			{
				int temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}

	cout << sum / 5 << '\n' << numbers[2];
}