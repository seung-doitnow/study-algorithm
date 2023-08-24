#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int roomNumber = 1;
	int multipleValue = 1;
	int moveCount = 1;
	while (roomNumber < N)
	{
		roomNumber += 6 * multipleValue;

		multipleValue++;
		moveCount++;
	}

	cout << moveCount;
}