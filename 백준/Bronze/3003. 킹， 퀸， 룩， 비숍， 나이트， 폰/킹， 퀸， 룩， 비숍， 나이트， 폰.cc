#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i < 6; i++)
	{
		int piece;
		cin >> piece;

		char chessPieces[7] = "112228";

		cout << (int)(chessPieces[i] - '0') - piece << ' ';
	}
}