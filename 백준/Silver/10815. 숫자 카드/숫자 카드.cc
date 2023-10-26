#include <iostream>

using namespace std;

bool cards[20'000'001] = { false };

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int number;
		cin >> number;

		cards[number + 10'000'000] = true;
	}

	int M;
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int number;
		cin >> number;

		if (cards[number + 10'000'000])
			cout << 1 << ' ';
		else
			cout << 0 << ' ';
	}
}