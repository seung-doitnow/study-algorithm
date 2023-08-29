#include <iostream>

using namespace std;

int main()
{
	char word[1'000'001];
	cin >> word;

	int alphabetUsages[58] = { 0 };
	for (int i = 0; word[i] != '\0'; i++)
		alphabetUsages[(int)(word[i] - 'A')]++;

	int sequence = 0;
	int maxUsage = 0;
	bool isManyMaximum = false;
	for (int i = 0; i < 27; i++)
	{
		int usage = alphabetUsages[i] + alphabetUsages[i + 32];

		if (usage == maxUsage)
		{
			isManyMaximum = true;
			continue;
		}

		if (maxUsage < usage)
		{
			sequence = i;
			maxUsage = usage;
			isManyMaximum = false;
		}
	}

	if (isManyMaximum)
		cout << '?';
	else
		cout << (char)(sequence + (int)'A');
}