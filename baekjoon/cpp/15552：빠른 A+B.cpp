// 15552번 : 빠른 A+B
// 주소 : https://www.acmicpc.net/problem/15552

#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int A, B;
		cin >> A >> B;

		cout << A + B << '\n';
	}
}