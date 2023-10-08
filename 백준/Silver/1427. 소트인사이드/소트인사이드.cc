#include <iostream>

using namespace std;

int main()
{
	char N[11];
	cin >> N;

	for (int i = 0; N[i] != '\0'; i++)
	{
		for (int j = i; N[j] != '\0'; j++)
		{
			if (N[i] < N[j])
			{
				int temp = N[i];
				N[i] = N[j];
				N[j] = temp;
			}
		}
	}

	for (int i = 0; N[i] != '\0'; i++)
		cout << N[i];
}