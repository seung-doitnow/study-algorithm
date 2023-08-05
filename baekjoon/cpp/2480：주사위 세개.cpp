// 2480번 : 주사위 세개
// 주소 : https://www.acmicpc.net/problem/2480

#include <iostream>

using namespace std;

int main()
{
	int dice1, dice2, dice3;
	cin >> dice1 >> dice2 >> dice3;

	if (dice1 == dice2 && dice2 == dice3)
		cout << 10'000 + (dice1 * 1'000);
	else if (dice1 == dice2 || dice1 == dice3)
		cout << 1'000 + (dice1 * 100);
	else if (dice2 == dice3)
		cout << 1'000 + (dice2 * 100);
	else
	{
		int maxDiceValue = dice1;
		if (maxDiceValue < dice2)
			maxDiceValue = dice2;
		
		if (maxDiceValue < dice3)
			maxDiceValue = dice3;

		cout << maxDiceValue * 100;
	}
}