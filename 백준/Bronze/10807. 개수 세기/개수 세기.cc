#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	int counts[201] = { 0 };
	for (int i = 0; i < N; i++)
	{
		int integer;
		cin >> integer;

		counts[integer + 100]++;
	}

	int v;
	cin >> v;

	cout << counts[v + 100];
}