#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		char star = '*';
		for (int j = 0; j < i; j++)
			cout << star;

		cout << '\n';
	}
}