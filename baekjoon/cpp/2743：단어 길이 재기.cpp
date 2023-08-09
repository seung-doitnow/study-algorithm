// 2743번 : 단어 길이 재기
// 주소 : https://www.acmicpc.net/problem/2743

#include <iostream>

using namespace std;

int main()
{
	char word[101];
	cin >> word;

	int length = 0;
	for (int i = 0; word[i] != '\0'; i++)
		length++;

	cout << length;
}