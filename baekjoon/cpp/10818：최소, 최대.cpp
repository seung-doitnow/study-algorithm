// 10818번 : 최소, 최대
// 주소 : https://www.acmicpc.net/problem/10818

#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	int min = 1'000'001;
	int max = -1'000'001;
	for (int i = 0; i < N; i++)
	{
		int integer;
		cin >> integer;

		if (integer < min)
			min = integer;

		if (max < integer)
			max = integer;
	}

	cout << min << ' ' << max;
}