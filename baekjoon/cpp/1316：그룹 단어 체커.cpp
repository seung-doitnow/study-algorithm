// 1316번 : 그룹 단어 체커
// 주소 : https://www.acmicpc.net/problem/1316

#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int count = 0;
	for (int i = 0; i < N; i++)
	{
		char word[101];
		cin >> word;

		bool isUsed[26] = { false };
		bool isGroupWord = true;
		char previousWord = '\0';
		for (int j = 0; word[j] != '\0'; j++)
		{
			int index = (int)(word[j] - 'a');
			if (isUsed[index] && word[j] != previousWord)
			{
				isGroupWord = false;
				break;
			}
			else
			{
				isUsed[index] = true;
				previousWord = word[j];
			}
		}

		if (isGroupWord)
			count++;
	}

	cout << count;
}