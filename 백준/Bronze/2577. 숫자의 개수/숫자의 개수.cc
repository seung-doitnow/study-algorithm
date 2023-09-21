#include <iostream>

using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	int multiple = A * B * C;
	int counts[10] = { 0 };
	while (multiple != 0)
	{
		counts[multiple % 10]++;
		multiple /= 10;
	}

	for (int i = 0; i < 10; i++)
		cout << counts[i] << '\n';
}