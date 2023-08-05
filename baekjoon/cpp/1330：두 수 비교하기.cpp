// 1330번 : 두 수 비교하기
// 주소 : https://www.acmicpc.net/problem/1330

#include <iostream>

using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;

	if (A > B)
		cout << '>';
	else if (A < B)
		cout << '<';
	else
		cout << "==";
}