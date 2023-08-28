#include <iostream>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	int count = 0;
	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
			count++;

		if (K == count)
		{
			cout << i;
			return 0;
		}
	}

	cout << 0;
}