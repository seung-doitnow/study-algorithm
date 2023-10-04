#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int numbers[1'000];
	for (int i = 0; i < N; i++)
		cin >> numbers[i];

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (numbers[i] > numbers[j])
			{
				int temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++)
		cout << numbers[i] << '\n';
}