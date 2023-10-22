#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	bool isNotPrimeNumbers[246'913] = { false };
	isNotPrimeNumbers[1] = true;
	int squareRoot = sqrt(246'912);
	for (int i = 2; i <= squareRoot; i++)
	{
		if (isNotPrimeNumbers[i] == false)
		{
			for (int j = i + i; j <= 246'912; j += i)
				isNotPrimeNumbers[j] = true;
		}
	}

	while (true)
	{
		int n;
		cin >> n;

		if (n == 0)
			return 0;

		int count = 0;
		for (int i = n + 1; i <= 2 * n; i++)
			if (isNotPrimeNumbers[i] == false)
				count++;

		cout << count << '\n';
	}
}