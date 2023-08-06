// 25304번 : 영수증
// 주소 : https://www.acmicpc.net/problem/25304

#include <iostream>

using namespace std;

int main()
{
	int X, N;
	cin >> X >> N;

	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;

		sum += a * b;
	}

	if (X == sum)
		cout << "Yes";
	else
		cout << "No";
}