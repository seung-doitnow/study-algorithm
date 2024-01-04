#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<int> coordinates;
	vector<int> sortedCoordinates;
	for (int i = 0; i < N; i++)
	{
		int coordinate;
		cin >> coordinate;

		coordinates.push_back(coordinate);
		sortedCoordinates.push_back(coordinate);
	}

	sort(sortedCoordinates.begin(), sortedCoordinates.end());
	sortedCoordinates.erase(unique(sortedCoordinates.begin(), sortedCoordinates.end()), sortedCoordinates.end());

	for (int i = 0; i < N; i++)
		cout << lower_bound(sortedCoordinates.begin(), sortedCoordinates.end(), coordinates[i]) - sortedCoordinates.begin() << '\n';
}