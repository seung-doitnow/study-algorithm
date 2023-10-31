#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

string pokemonNames[100'000];
unordered_map<string, int> pokemonNumbers;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		string pokemon;
		cin >> pokemon;

		pokemonNames[i] = pokemon;
		pokemonNumbers[pokemon] = i + 1;
	}

	for (int i = 0; i < M; i++)
	{
		string question;
		cin >> question;

		if (question[0] <= '9')
		{
			int index = stoi(question) - 1;

			cout << pokemonNames[index] << '\n';
		}
		else
			cout << pokemonNumbers[question] << '\n';
	}
}