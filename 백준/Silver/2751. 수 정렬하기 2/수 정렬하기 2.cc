#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> numbers;
	for (int i = 0; i < N; i++)
	{
		int number;
		cin >> number;

		numbers.push_back(number);
	}

	sort(numbers.begin(), numbers.end());

	for (int i = 0; i < N; i++)
		cout << numbers[i] << '\n';
}