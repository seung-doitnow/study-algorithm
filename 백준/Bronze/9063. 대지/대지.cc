#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	int minX = 10'001;
	int maxX = -10'001;
	int minY = 10'001;
	int maxY = -10'001;
	for (int i = 0; i < N; i++)
	{
		int x, y;
		cin >> x >> y;

		if (x < minX) minX = x;
		if (maxX < x) maxX = x;
		if (y < minY) minY = y;
		if (maxY < y) maxY = y;
	}

	cout << (maxX - minX) * (maxY - minY);
}