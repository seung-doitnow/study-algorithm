#include <iostream>

using namespace std;

int main()
{
	char word[16];
	cin >> word;

	int minTime = 0;
	for (int i = 0; word[i] != '\0'; i++)
	{
		char times[27] = "3334445556667778888999::::";

		int index = (int)(word[i] - 'A');
		minTime += (int)(times[index] - '0');
	}

	cout << minTime;
}