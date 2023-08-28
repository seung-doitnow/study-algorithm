#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    
	while (true)
	{
		char string[101];
		cin.getline(string, sizeof(string));

		if (cin.eof())
			break;

		cout << string << '\n';
	}
}