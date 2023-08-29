#include <iostream>

using namespace std;

int main()
{
	int max = -1;
	int row = 0;
	int column = 0;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			int number;
			cin >> number;

			if (max < number)
			{
				max = number;
				row = i;
				column = j;
			}
		}
	}

	cout << max << '\n' << row << ' ' << column;
}