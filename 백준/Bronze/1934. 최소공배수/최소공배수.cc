#include <iostream>

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
		int A, B;
		cin >> A >> B;

		int gcd, num;
		if (A < B)
		{
			gcd = A;
			num = B;
		}
		else
		{
			gcd = B;
			num = A;
		}

		while (num % gcd != 0)
		{
			int remainder = num % gcd;
			num = gcd;
			gcd = remainder;
		}

		cout << A * B / gcd << '\n';
	}
}