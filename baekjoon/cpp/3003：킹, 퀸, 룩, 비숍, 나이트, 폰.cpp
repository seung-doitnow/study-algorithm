// 3003번 : 킹, 퀸, 룩, 비숍, 나이트, 폰
// 주소 : https://www.acmicpc.net/problem/3003

#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i < 6; i++)
	{
		int piece;
		cin >> piece;

		char chessPieces[7] = "112228";

		cout << (int)(chessPieces[i] - '0') - piece << ' ';
	}
}