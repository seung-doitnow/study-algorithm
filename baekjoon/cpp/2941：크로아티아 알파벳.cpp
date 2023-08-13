// 2941번 : 크로아티아 알파벳
// 주소 : https://www.acmicpc.net/problem/2941

#include <iostream>

using namespace std;

int main()
{
	char word[101];
	cin >> word;

	int index = 0;
	int count = 0;
	while (word[index] != '\0')
	{
		int nextIndex = index + 1;
		switch (word[index])
		{
		case 'c':
			nextIndex = index + 1;
			if (word[nextIndex] == '=' || word[nextIndex] == '-')
			{
				count++;
				index += 2;
			}
			else
			{
				count++;
				index++;
			}

			break;

		case 'd':
			nextIndex = index + 1;
			if (word[nextIndex] == 'z')
			{
				if (word[index + 2] == '=')
				{
					count++;
					index += 3;
				}
				else
				{
					count++;
					index++;
				}
			}
			else if (word[nextIndex] == '-')
			{
				count++;
				index += 2;
			}
			else
			{
				count++;
				index++;
			}
			break;

		case 'l':
		case 'n':
			nextIndex = index + 1;
			if (word[nextIndex] == 'j')
			{
				count++;
				index += 2;
			}
			else
			{
				count++;
				index++;
			}
			break;

		case 's':
		case 'z':
			nextIndex = index + 1;
			if (word[nextIndex] == '=')
			{
				count++;
				index += 2;
			}
			else
			{
				count++;
				index++;
			}
			break;

		default:
			count++;
			index++;
			break;
		}
	}

	cout << count;
}