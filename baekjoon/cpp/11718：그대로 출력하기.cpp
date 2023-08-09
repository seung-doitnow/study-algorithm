// 11718번 : 그대로 출력하기
// 주소 : https://www.acmicpc.net/problem/11718

#include <iostream>

using namespace std;

int main()
{
	while (true)
	{
		char string[101];
		cin.getline(string, sizeof(string));

		if (cin.eof())
			break;

		cout << string << '\n';
	}
}