#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N, k;
	cin >> N >> k;

	int scores[1'000];
	for (int i = 0; i < N; i++)
		cin >> scores[i];

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i; j < N; j++)
		{
			if (scores[i] < scores[j])
			{
				int temp = scores[i];
				scores[i] = scores[j];
				scores[j] = temp;
			}
		}
	}

	cout << scores[k - 1];
}