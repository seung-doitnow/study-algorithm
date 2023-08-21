#include <iostream>

using namespace std;

int main()
{
	int N, B;
	cin >> N >> B;

	char convertedNumber[31] = "";
	int quotient = N;
	int remainder = 0;
	int index = 0;
	do
	{
		remainder = quotient % B;
		if (9 < remainder)
			remainder += 7;

		convertedNumber[index] = (char)(remainder + '0');
		index++;

	} while (quotient /= B);

	for (int i = index - 1; 0 <= i; i--)
		cout << convertedNumber[i];
}