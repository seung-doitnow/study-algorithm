#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int totalCount = 0;
	for (int i = N / 5; 0 <= i; i--)
	{
		int tempN = N;
		int totalCount = 0;

		tempN -= 5 * i;

		int count3 = tempN / 3;
		tempN -= 3 * count3;

		if (tempN == 0)
		{
			cout << i + count3; 
			return 0;
		}
	}

	cout << -1;
}