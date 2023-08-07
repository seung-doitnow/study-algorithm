// 10871번 : X보다 작은 수
// 주소 : https://www.acmicpc.net/problem/10871

#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N, X;
	cin >> N >> X;

	for (int i = 0; i < N; i++)
	{
		int integer;
		cin >> integer;

		if (integer < X)
			cout << integer << ' ';
	}
}