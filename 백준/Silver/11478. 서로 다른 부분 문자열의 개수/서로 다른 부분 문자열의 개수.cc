#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
	string S;
	cin >> S;

	unordered_map<string, bool> strings;
	for (int i = 0; i < S.size(); i++)
	{
		int count = S.size() - i;
		for (int j = 1; j <= count; j++)
		{
			strings[S.substr(i, j)] = true;
		}
	}

	cout << strings.size();
}