// 10950번 : A+B - 3
// 주소 : https://www.acmicpc.net/problem/10950

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