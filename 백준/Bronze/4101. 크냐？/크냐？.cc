#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	while (true)
	{
		int num1, num2;
		cin >> num1 >> num2;

		if (num1 == 0 && num2 == 0)
			return 0;

		if (num1 > num2)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}