#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int M, N;
	cin >> M >> N;

	bool isNotPrime[10'001] = { false };
	isNotPrime[1] = true;
	int repeatCount = sqrt(10'000);
	for (int i = 2; i <= repeatCount; i++)
	{
		if (isNotPrime[i])
			continue;

		for (int j = i * i; j <= 10'000; j += i)
			isNotPrime[j] = true;
	}

	int sum = 0;
	for (int i = M; i <= N; i++)
	{
		if (isNotPrime[i])
			continue;

		sum += i;
	}

	int min = -1;
	for (int i = M; i <= N; i++)
	{
		if (isNotPrime[i] == false)
		{
			min = i;
			break;
		}
	}

	if (sum == 0)
		cout << -1;
	else
		cout << sum << '\n' << min;
}