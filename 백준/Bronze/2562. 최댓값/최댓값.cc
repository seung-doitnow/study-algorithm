#include <iostream>

using namespace std;

int main()
{
	int max = 0;
	int sequence = 0;
	for (int i = 1; i <= 9; i++)
	{
		int number;
		cin >> number;

		if (max < number)
		{
			max = number;
			sequence = i;
		}
	}

	cout << max << '\n' << sequence;
}