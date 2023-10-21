#include <iostream>
#include <cmath>

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
		long long n;
		cin >> n;

		if (n == 0 || n == 1)
		{
			cout << 2 << '\n';
			continue;
		}

		while (true)
		{
			bool isPrimeNumber = true;
			int squareRoot = sqrt(n);
			for (long long j = 2; j <= squareRoot; j++)
			{
				if (n % j == 0)
				{
					isPrimeNumber = false;
					break;
				}
			}

			if (isPrimeNumber)
				break;

			n++;
		}

		cout << n << '\n';
	}
}