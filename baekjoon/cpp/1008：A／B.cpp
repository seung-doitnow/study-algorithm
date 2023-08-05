// 1008번 : A/B
// 주소 : https://www.acmicpc.net/problem/1008

#include <iostream>

using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;

	cout.precision(9);
	cout << fixed << A / (double)B;
}