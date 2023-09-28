#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	int num, gcd;
	if (num1 < num2)
	{
		num = num2;
		gcd = num1;
	}
	else
	{
		num = num1;
		gcd = num2;
	}

	while (num % gcd != 0)
	{
		int remainder = num % gcd;
		num = gcd;
		gcd = remainder;
	}

	cout << gcd << '\n' << num1 * num2 / gcd;
}