// 5597번 : 과제 안 내신 분..?
// 주소 : https://www.acmicpc.net/problem/5597

#include <iostream>

using namespace std;

int main()
{
	bool submitAssignment[31] = { false };
	for (int i = 0; i < 28; i++)
	{
		int n;
		cin >> n;

		submitAssignment[n] = true;
	}

	for (int i = 1; i <= 30; i++)
	{
		if (submitAssignment[i] == false)
			cout << i << '\n';
	}
}