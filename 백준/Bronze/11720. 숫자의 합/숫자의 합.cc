#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	char numbers[101];
	cin >> numbers;

	int sum = 0;
	for (int i = 0; i < N; i++)
		sum += (int)(numbers[i] - '0');

	cout << sum;
}