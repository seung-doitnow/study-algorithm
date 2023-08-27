#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	int baskets[101] = { 0 };
	for (int i = 1; i <= N; i++)
		baskets[i] = i;

	for (int count = 0; count < M; count++)
	{
		int i, j;
		cin >> i >> j;

		int number = baskets[i];
		baskets[i] = baskets[j];
		baskets[j] = number;
	}

	for (int i = 1; i <= N; i++)
		cout << baskets[i] << ' ';
}