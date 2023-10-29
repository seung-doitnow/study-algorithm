#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int sum = 0;
		int min = 101;
		int numbers[7];
		for (int j = 0; j < 7; j++)
		{
			cin >> numbers[j];

			if (numbers[j] % 2 == 0)
			{
				sum += numbers[j];

				if (numbers[j] < min)
					min = numbers[j];
			}
		}
		
		cout << sum << ' ' << min << '\n';
	}
}