#include <iostream>

using namespace std;

int main()
{
	int count;
	cin >> count;

	bool isColored[100][100] = { false };
	for (int i = 0; i < count; i++)
	{
		int startRow;
		int startColumn;
		cin >> startRow >> startColumn;

		int endColumn = startColumn + 10;
		for (int j = startColumn; j < endColumn; j++)
		{
			int endRow = startRow + 10;
			for (int k = startRow; k < endRow; k++)
				isColored[j][k] = true;
		}
	}

	int coloredArea = 0;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (isColored[i][j])
				coloredArea++;
		}
	}

	cout << coloredArea;
}