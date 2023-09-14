#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int title = 666;
	int count = 0;
	while (count != N)
	{
		int currentTitle = title;
		while (100 < currentTitle)
		{
			if (currentTitle % 1000 == 666)
			{
				count++;
				break;
			}

			currentTitle /= 10;
		}

		title++;
	}

	cout << --title;
}