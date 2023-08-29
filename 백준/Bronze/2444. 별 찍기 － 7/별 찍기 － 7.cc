#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int lineCount = (N * 2) - 1;
	int criterion = -(lineCount / 2);
	for (int i = 0; i < lineCount; i++)
	{
		int blankCount = abs(criterion);
		char blank = ' ';
		for (int j = 0; j < blankCount; j++)
			cout << blank;

		int starCount = lineCount - (blankCount * 2);
		char star = '*';
		for (int j = 0; j < starCount; j++)
			cout << star;

		criterion++;

		cout << '\n';
	}
}