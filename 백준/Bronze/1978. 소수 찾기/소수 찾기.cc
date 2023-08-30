#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N;
	cin >> N;

	bool isNotPrime[1'001] = { false };
	isNotPrime[1] = true;
	int repeatCount = sqrt(1'000);
	for (int i = 2; i <= repeatCount; i++)
	{
		if (isNotPrime[i])
			continue;

		for (int j = i * i; j <= 1'000; j += i)
			isNotPrime[j] = true;
	}

	int count = 0;
	for (int i = 0; i < N; i++)
	{
		int number;
		cin >> number;

		if (isNotPrime[number] == false)
			count++;
	}

	cout << count;
}