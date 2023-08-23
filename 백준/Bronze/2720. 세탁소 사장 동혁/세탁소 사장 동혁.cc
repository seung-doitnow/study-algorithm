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
		int change;
		cin >> change;

		int coins[4] = { 25, 10, 5, 1 };
		for (int j = 0; j < 4; j++)
		{
			cout << change / coins[j] << ' ';

			change %= coins[j];
		}
	}
}