#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		int sum = 0;
		int divisor = 10;
		for (int j = i; j != 0; j /= 10)
			sum += j % divisor;

		if (sum + i == N)
		{
			cout << i;
			return 0;
		}
	}

	cout << 0;
}