// 9086번 : 문자열
// 주소 : https://www.acmicpc.net/problem/9086

#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		char string[1'001];
		cin >> string;

		int length = 0;
		for (int j = 0; string[j] != '\0'; j++)
			length++;

		cout << string[0] << string[length - 1] << '\n';
	}
}