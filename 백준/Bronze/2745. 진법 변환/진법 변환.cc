#include <iostream>

using namespace std;

int main()
{
	char N[31];
	int B;
	cin >> N >> B;

	int length = 0;
	for (int i = 0; N[i] != '\0'; i++)
		length++;

	int sum = 0;
	int multiplyValue = 1;
	for (int i = length - 1; 0 <= i; i--)
	{
		int digit = (int)(N[i] - '0');
		if ('A' <= N[i])
			digit -= 7;

		digit *= multiplyValue;
		sum += digit;
		multiplyValue *= B;
	}

	cout << sum;
}