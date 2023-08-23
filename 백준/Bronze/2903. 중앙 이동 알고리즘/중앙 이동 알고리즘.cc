#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int sqrt = 3;
	int plusValue = 2;
	for (int i = 1; i < N; i++)
	{
		sqrt += plusValue;
		plusValue *= 2;
	}

	cout << sqrt * sqrt;
}