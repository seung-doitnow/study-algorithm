#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int A, B, V;
	cin >> A >> B >> V;

	int goUp = ceil((V - A) / (A - (double)B));
	cout << goUp + 1;
}