#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N, previousLocation;
	cin >> N >> previousLocation;

	int intervals[99'999];
	for (int i = 0; i < N - 1; i++)
	{
		int number;
		cin >> number;

		intervals[i] = number - previousLocation;
		previousLocation = number;
	}

	int gcd = intervals[0];
	for (int i = 1; i < N - 1; i++)
	{
		int number;
		if (intervals[i] < gcd)
		{
			number = gcd;
			gcd = intervals[i];
		}
		else
		{
			number = intervals[i];
		}

		while (number % gcd != 0)
		{
			int remainder = number % gcd;
			number = gcd;
			gcd = remainder;
		}
	}

	int sum = 0;
	for (int i = 0; i < N - 1; i++)
	{
		sum += intervals[i] / gcd - 1;
	}

	cout << sum;
}