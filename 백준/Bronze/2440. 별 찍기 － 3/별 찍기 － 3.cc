#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	char star = '*';
	char blank = '1';
	for (int i = 0; i < N; i++)
	{
		for (int j = i; j < N; j++)
			cout << star;

		cout << '\n';
	}
}