#include <iostream>

using namespace std;

int main()
{
	char S[101];
	cin >> S;

	int sequences[26] = { 0 };
	for (int i = 0; i < 26; i++)
		sequences[i] = -1;

	for (int i = 0; S[i] != '\0'; i++)
	{
		int index = (int)(S[i] - 'a');
		if (sequences[index] == -1)
			sequences[index] = i;
	}

	for (int i = 0; i < 26; i++)
		cout << sequences[i] << ' ';
}