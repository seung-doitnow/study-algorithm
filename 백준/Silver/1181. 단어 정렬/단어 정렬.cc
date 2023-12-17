#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool compare(string lhs, string rhs)
{
	if (lhs.size() < rhs.size())
		return true;
	else if (lhs.size() > rhs.size())
		return false;
	else
	{
		for (int i = 0; i < lhs.size(); i++)
		{
			if (lhs[i] < rhs[i])
				return true;
			else if (lhs[i] > rhs[i])
				return false;
		}
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<string> words;
	unordered_map<string, bool> existWord;
	for (int i = 0; i < N; i++)
	{
		string word;
		cin >> word;

		if (existWord[word])
			continue;

		existWord[word] = true;
		words.push_back(word);
	}

	sort(words.begin(), words.end(), compare);

	for (vector<string>::iterator iter = words.begin(); iter != words.end(); iter++)
		cout << *iter << '\n';
}