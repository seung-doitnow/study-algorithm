#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int countA, countB;
	cin >> countA >> countB;

	unordered_map<int, bool> A;
	for (int i = 0; i < countA; i++)
	{
		int element;
		cin >> element;

		A[element] = true;
	}

	unordered_map<int, bool> B;
	vector<int> differenceSets;
	for (int i = 0; i < countB; i++)
	{
		int element;
		cin >> element;

		B[element] = true;

		if (A.find(element) == A.end())
			differenceSets.push_back(element);
	}

	for (unordered_map<int, bool>::iterator iter = A.begin(); iter != A.end(); iter++)
	{
		pair<int, int> element = *iter;

		if (B.find(element.first) == B.end())
			differenceSets.push_back(element.second);
	}

	cout << differenceSets.size();
}