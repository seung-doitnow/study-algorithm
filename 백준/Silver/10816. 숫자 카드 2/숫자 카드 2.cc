#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	unordered_map<int, int> cards;
	for (int i = 0; i < N; i++)
	{
		int card;
		cin >> card;

		if (cards.find(card) == cards.end())
			cards[card] = 1;
		else
			cards[card]++;
	}

	int M;
	cin >> M;

	for (int i = 0; i < M; i++)
	{
		int number;
		cin >> number;

		if (cards.find(number) == cards.end())
			cout << 0 << ' ';
		else
			cout << cards[number] << ' ';
	}
}