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

	bool isNotPrimeNumbers[1'000'001] = { false };
	isNotPrimeNumbers[1] = true;
	int squareRoot = sqrt(1'000'000);
	for (int i = 2; i <= squareRoot; i++)
	{
		if (isNotPrimeNumbers[i] == false)
		{
			for (int j = i + i; j <= 1'000'000; j += i)
				isNotPrimeNumbers[j] = true;
		}
	}

	for (int i = 0; i < T; i++)
	{
		int N;
		cin >> N;

		int count = 0;
		int repeat = N / 2;
		for (int j = 2; j <= repeat; j++)
		{
			if (isNotPrimeNumbers[j] == false && isNotPrimeNumbers[N - j] == false)
				count++;
		}

		cout << count << '\n';
	}
}