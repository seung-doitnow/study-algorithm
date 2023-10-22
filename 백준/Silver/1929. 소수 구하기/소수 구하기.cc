#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int M, N;
	cin >> M >> N;

	bool isNotPrimeNumbers[1'000'001] = { false };
	isNotPrimeNumbers[1] = true;
	int squareRoot = sqrt(N);
	for (int i = 2; i <= squareRoot; i++)
	{
		if (isNotPrimeNumbers[i] == false)
		{
			for (int j = i + i; j <= N; j += i)
				isNotPrimeNumbers[j] = true;
		}
	}

	for (int i = M; i <= N; i++)
	{
		if (isNotPrimeNumbers[i] == false)
			cout << i << '\n';
	}
}