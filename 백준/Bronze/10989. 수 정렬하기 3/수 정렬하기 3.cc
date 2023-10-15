#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	int counts[10'001] = { 0 };
	for (int i = 0; i < N; i++)
	{
		int number;
		cin >> number;

		counts[number]++;
	}

	for (int i = 1; i <= 10'000; i++)
		for (int j = 1; j <= counts[i]; j++)
			cout << i << '\n';
}