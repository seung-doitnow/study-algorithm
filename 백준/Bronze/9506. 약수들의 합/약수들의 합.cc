#include <iostream>

using namespace std;

int divisors[5'000] = { 0 };

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	while (true)
	{
		int n;
		cin >> n;

		if (n == -1)
			return 0;

		int divisorIndex = 0;
		int divisorCount = 0;
		int sum = 0;
		int repeatCount = n / 2;
		for (int i = 1; i <= repeatCount; i++)
		{
			if (n % i == 0)
			{
				divisors[divisorIndex] = i;
				divisorIndex++;
				divisorCount++;
				sum += i;
			}
		}

		if (n == sum)
		{
			cout << n << " = " << divisors[0];

			for (int i = 1; i < divisorCount; i++)
				cout << " + " << divisors[i];
		}
		else
			cout << n << " is NOT perfect.";

		cout << '\n';
	}
}