// 1546번 : 평균
// 주소 : https://www.acmicpc.net/problem/1546

#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	int scores[1'000] = { 0 };
	double max = -1;
	for (int i = 0; i < N; i++)
	{
		cin >> scores[i];

		if (max < scores[i])
			max = scores[i];
	}

	double sum = 0;
	for (int i = 0; i < N; i++)
		sum += scores[i] / max * 100;

	cout << sum / N;
}