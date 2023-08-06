// 8393번 : 합
// 주소 : https://www.acmicpc.net/problem/8393

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i;

	cout << sum;
}