// 14681번 : 사분면 고르기
// 주소 : https://www.acmicpc.net/problem/14681

#include <iostream>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;

	if (0 < x)
	{
		if (0 < y)
			cout << '1';
		else
			cout << '4';
	}
	else
	{ 
		if (0 < y)
			cout << '2';
		else
			cout << '3';
	}
}