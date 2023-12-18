#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<string> customers[201];
	for (int i = 0; i < N; i++)
	{
		int age;
		string name;
		cin >> age >> name;

		customers[age].push_back(name);
	}

	vector<pair<int, string>> sortedCustomers;
	for (int i = 1; i < 201; i++)
	{
		for (int j = 0; j < customers[i].size(); j++)
			sortedCustomers.push_back({ i, customers[i][j] });
	}

	for (int i = 0; i < sortedCustomers.size(); i++)
		cout << sortedCustomers[i].first << ' ' << sortedCustomers[i].second << '\n';
}