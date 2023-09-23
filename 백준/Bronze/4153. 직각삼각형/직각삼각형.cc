#include <iostream>

using namespace std;

int main()
{
	while (true)
	{
		int lengths[3];
		for (int i = 0; i < 3; i++)
			cin >> lengths[i];

		if (lengths[0] == 0 && lengths[1] == 0 && lengths[2] == 0)
			return 0;

		int sums[3];
		for (int i = 0; i < 3; i++)
			sums[i] = lengths[i] * lengths[i];

		if (sums[0] == sums[1] + sums[2] || sums[1] == sums[0] + sums[2] || sums[2] == sums[0] + sums[1])
			cout << "right\n";
		else
			cout << "wrong\n";
	}
}