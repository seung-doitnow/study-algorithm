#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	pair<int, int> coordinates[100'000];
	for (int i = 0; i < N; i++)
	{
		int x, y;
		cin >> x >> y;

		coordinates[i].first = x;
		coordinates[i].second = y;
	}

	sort(coordinates, coordinates + N,
		[](pair<int, int> lhs, pair<int, int> rhs)
		{
			if (lhs.second < rhs.second)
				return true;
			else if (lhs.second > rhs.second)
				return false;
			else
			{
				if (lhs.first < rhs.first)
					return true;
				else if (lhs.first > rhs.first)
					return false;
				else
					return true;
			}
		}
	);

	for (int i = 0; i < N; i++)
		cout << coordinates[i].first << ' ' << coordinates[i].second << '\n';
}