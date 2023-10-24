#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	char blank = ' ';
	char star = '*';
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i; j++)
			cout << blank;

		for (int j = i; j < N; j++)
			cout << star;

		cout << '\n';
	}
}