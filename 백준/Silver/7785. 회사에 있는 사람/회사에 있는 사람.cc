#include <iostream>
#include <set>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	set<string, greater<string>> worker;
	for (int i = 0; i < n; i++)
	{
		string name, record;
		cin >> name >> record;

		if (record == "enter")
			worker.insert(name);
		else
			worker.erase(name);
	}

	for (set<string>::iterator iter = worker.begin(); iter != worker.end(); iter++)
		cout << *iter << '\n';
}