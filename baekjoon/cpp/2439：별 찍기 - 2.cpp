// 2439번 : 별 찍기 - 2
// 주소 : https://www.acmicpc.net/problem/2439

#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		char blank = ' ';
		for (int j = i; j < N; j++)
			cout << blank;

		char star = '*';
		for (int j = 0; j < i; j++)
			cout << star;

		cout << '\n';
	}
}