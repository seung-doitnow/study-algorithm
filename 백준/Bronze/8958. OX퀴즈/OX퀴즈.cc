#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		char results[81];
		cin >> results;

		int totalScore = 0;
		int score = 1;
		for (int j = 0; results[j] != '\0'; j++)
		{
			if (results[j] == 'O')
			{
				totalScore += score;
				score++;
			}
			else
				score = 1;
		}

		cout << totalScore << '\n';
	}
}