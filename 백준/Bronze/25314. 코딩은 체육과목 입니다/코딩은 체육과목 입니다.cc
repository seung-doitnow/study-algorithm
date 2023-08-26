#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	char word[6] = "long ";
	int longCount = N / 4;
	for (int i = 0; i < longCount; i++)
		cout << word;

	cout << "int";
}