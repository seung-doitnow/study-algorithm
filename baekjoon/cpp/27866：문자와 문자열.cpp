// 27866번 : 문자와 문자열
// 주소 : https://www.acmicpc.net/problem/27866

#include <iostream>

using namespace std;

int main()
{
	char word[1'001];
	int sequence;
	cin >> word >> sequence;

	cout << word[sequence - 1];
}