#include <iostream>

using namespace std;

int main()
{
	int x[3], y[3];
	for (int i = 0; i < 3; i++)
		cin >> x[i] >> y[i];

	int answerX;
	if (x[0] == x[1])
		answerX = x[2];
	else if (x[0] == x[2])
		answerX = x[1];
	else
		answerX = x[0];

	int answerY;
	if (y[0] == y[1])
		answerY = y[2];
	else if (y[0] == y[2])
		answerY = y[1];
	else
		answerY = y[0];

	cout << answerX << ' ' << answerY;
}