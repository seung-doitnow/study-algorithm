#include <iostream>

using namespace std;

int main()
{
	char word[101];
	cin >> word;

	int reverseIndex = 0;
	for (int i = 0; word[i] != '\0'; i++)
		reverseIndex++;

	int count = reverseIndex / 2;
	reverseIndex--;
	for (int i = 0; i < count; i++)
	{
		if (word[i] != word[reverseIndex])
		{
			cout << 0;
			return 0;
		}

		reverseIndex--;
	}

	cout << 1;
}