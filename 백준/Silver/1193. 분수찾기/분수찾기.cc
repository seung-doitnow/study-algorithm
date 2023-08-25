#include <iostream>

using namespace std;

int main()
{
	int X;
	cin >> X;

	int sequence = 0;
	int fractionCount = 0;
	int plusValue = 1;
	while (fractionCount < X)
	{
		sequence++;

		fractionCount += plusValue;
		plusValue++;
	}

	if (sequence % 2 == 1)
		cout << fractionCount - X + 1 << '/' << sequence - (fractionCount - X);
	else
		cout << sequence - (fractionCount - X) << '/' << fractionCount - X + 1;
}