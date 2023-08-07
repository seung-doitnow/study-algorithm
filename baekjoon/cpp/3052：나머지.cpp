// 3052번 : 나머지
// 주소 : https://www.acmicpc.net/problem/3052

#include <iostream>

using namespace std;

int main()
{
	int remainders[42] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		int number;
		cin >> number;

		remainders[number % 42]++;
	}

	int count = 0;
	for (int i = 0; i < 42; i++)
	{
		if (remainders[i] != 0)
			count++;
	}

	cout << count;
}