#include <iostream>

using namespace std;

int main()
{
	char numbers[2][4];
	cin >> numbers[0] >> numbers[1];

	int index;
	for (int i = 2; 0 <= i; i--)
	{
		if (numbers[0][i] < numbers[1][i])
		{
			index = 1;
			break;
		}
		else if (numbers[1][i] < numbers[0][i])
		{
			index = 0;
			break;
		}
	}

	for (int i = 2; 0 <= i; i--)
		cout << numbers[index][i];
}