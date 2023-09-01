#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	while (N != 1)
	{
		int number = 2;
		while (N % number != 0)
			number++;

		cout << number << '\n';
		N /= number;
	}
}