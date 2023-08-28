#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int R;
		char S[21];
		cin >> R >> S;

		for (int j = 0; S[j] != '\0'; j++)
		{
			for (int k = 0; k < R; k++)
				cout << S[j];
		}

		cout << '\n';
	}
}