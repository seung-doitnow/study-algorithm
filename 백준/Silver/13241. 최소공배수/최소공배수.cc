#include <iostream>

using namespace std;

int main()
{
	long long int A, B;
	cin >> A >> B;

	long long int gcd, num;
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
		long long int remainder = num % gcd;
		num = gcd;
		gcd = remainder;
	}

	cout << A * B / gcd;
}