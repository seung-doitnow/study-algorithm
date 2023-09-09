#include <iostream>

using namespace std;

int main()
{
	int edges[3];
	int maxLength = 0;
	int sumEdge = 0;
	for (int i = 0; i < 3; i++)
	{
		cin >> edges[i];

		if (maxLength < edges[i])
			maxLength = edges[i];

		sumEdge += edges[i];
	}

	if ((sumEdge - maxLength) <= maxLength)
		sumEdge -= maxLength - (sumEdge - maxLength) + 1;

	cout << sumEdge;
}