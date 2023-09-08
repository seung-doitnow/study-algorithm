#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	while (true)
	{
		int edges[3];
		int maxLength = 0;
		int sumEdge = 0;
		for (int i = 0; i < 3; i++)
		{
			cin >> edges[i];

			if (edges[i] == 0)
				return 0;

			if (maxLength < edges[i])
				maxLength = edges[i];

			sumEdge += edges[i];
		}

		if (maxLength < (sumEdge - maxLength))
		{
			if (edges[0] == edges[1] && edges[1] == edges[2])
				cout << "Equilateral\n";
			else if (edges[0] == edges[1] || edges[0] == edges[2] || edges[1] == edges[2])
				cout << "Isosceles\n";
			else
				cout << "Scalene\n";
		}
		else
			cout << "Invalid\n";
	}
}