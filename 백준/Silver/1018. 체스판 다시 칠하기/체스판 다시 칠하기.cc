#include <iostream>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	char board[50][51];
	for (int i = 0; i < N; i++)
		cin >> board[i];

	int minCount = 65;
	for (int i = 0; i <= N - 8; i++)
	{
		for (int j = 0; j <= M - 8; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				char colors[3] = "BW";
				int colorIndex = k;
				int count = 0;
				for (int l = i; l < i + 8; l++)
				{
					for (int m = j; m < j + 8; m++)
					{
						if (board[l][m] != colors[colorIndex % 2])
							count++;

						colorIndex++;
					}

					colorIndex++;
				}

				if (count < minCount)
					minCount = count;
			}
		}
	}

	cout << minCount;
}