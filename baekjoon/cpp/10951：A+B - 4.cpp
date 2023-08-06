// 10951번 : A+B - 4
// 주소 :https://www.acmicpc.net/problem/10951

#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	while (true)
	{
		int A, B;
		cin >> A >> B;

		if (cin.eof())
			break;

		cout << A + B << '\n';
	}
}