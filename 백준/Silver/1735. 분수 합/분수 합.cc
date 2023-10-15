#include <iostream>

using namespace std;

int main()
{
	int numerator[2], denominator[2];
	for (int i = 0; i < 2; i++)
		cin >> numerator[i] >> denominator[i];

	int sumNumerator = (numerator[0] * denominator[1]) + (numerator[1] * denominator[0]);
	int sumDenominator = denominator[0] * denominator[1];

	int gcd, num;
	if (sumNumerator < sumDenominator)
	{
		gcd = sumNumerator;
		num = sumDenominator;
	}
	else
	{
		gcd = sumDenominator;
		num = sumNumerator;
	}

	while (num % gcd != 0)
	{
		int remainder = num % gcd;
		num = gcd;
		gcd = remainder;
	}

	if (sumNumerator % gcd == 0 && sumDenominator % gcd == 0)
		cout << sumNumerator / gcd << '\n' << sumDenominator / gcd;
	else
		cout << sumNumerator << '\n' << sumDenominator;
}