#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	unordered_map<string, bool> peoples;
	for (int i = 0; i < N; i++)
	{
		char people[21];
		cin >> people;

		peoples[people] = false;
	}

	vector<string> peopleList;
	for (int i = 0; i < M; i++)
	{
		char people[21];
		cin >> people;

		if (peoples.find(people) != peoples.end())
			peopleList.push_back(people);
	}

	sort(peopleList.begin(), peopleList.end());

	cout << peopleList.size() << '\n';
	for (int i = 0; i < peopleList.size(); i++)
		cout << peopleList[i] << '\n';
}