#include <iostream>

using namespace std;

int main()
{
	int H, M, cookingM;
	cin >> H >> M >> cookingM;

	int endH = H + (cookingM / 60);
	int endM = M + (cookingM % 60);
	if (60 <= endM)
	{
		endH += 1;
		endM -= 60;
	}

	if (24 <= endH)
		endH %= 24;

	cout << endH << ' ' << endM;
}