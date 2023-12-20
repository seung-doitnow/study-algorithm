#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		int soldierCount;
		cin >> soldierCount;

		if (N < soldierCount)
			count += N;
		else
			count += soldierCount;
	}

	cout << count;
}