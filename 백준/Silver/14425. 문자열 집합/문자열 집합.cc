#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	unordered_map<string, bool> stringMap;
	for (int i = 0; i < N; i++)
	{
		char string[501];
		cin >> string;

		stringMap[string] = true;
	}

	int count = 0;
	for (int i = 0; i < M; i++)
	{
		char string[501];
		cin >> string;

		if (stringMap[string])
			count++;
	}

	cout << count;
}