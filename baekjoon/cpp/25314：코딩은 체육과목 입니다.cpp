// 25314번 : 코딩은 체육과목 입니다
// 주소 : https://www.acmicpc.net/problem/25314

#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	char word[6] = "long ";
	int longCount = N / 4;
	for (int i = 0; i < longCount; i++)
		cout << word;

	cout << "int";
}