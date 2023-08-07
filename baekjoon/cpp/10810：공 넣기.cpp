// 10810번 : 공 넣기
// 주소 : https://www.acmicpc.net/problem/10810

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
	for (int count = 0; count < M; count++)
	{
		int i, j, k;
		cin >> i >> j >> k;

		while (i <= j)
		{
			baskets[i] = k;
			i++;
		}
	}

	for (int i = 1; i <= N; i++)
		cout << baskets[i] << ' ';
}