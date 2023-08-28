#include <iostream>

using namespace std;

int main()
{
	char word[1'001];
	int sequence;
	cin >> word >> sequence;

	cout << word[sequence - 1];
}