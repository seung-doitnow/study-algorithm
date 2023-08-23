#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    
	char string[1'000'001];
	cin.getline(string, sizeof(string));

	int index = 0;
	if (string[index] == ' ')
		index++;

	int count = 0;
	while (string[index] != '\0')
	{
		if (string[index] == ' ')
			count++;

		index++;
	}

	if (string[index - 1] != ' ')
		count++;

	cout << count;
}