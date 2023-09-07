#include <iostream>

using namespace std;

int main()
{
	int angles[3];
	int sumAngle = 0;
	for (int i = 0; i < 3; i++)
	{
		cin >> angles[i];

		sumAngle += angles[i];
	}

	if (sumAngle == 180)
	{
		if (angles[0] == angles[1] && angles[0] == angles[2])
			cout << "Equilateral";
		else if (angles[0] == angles[1] || angles[0] == angles[2] || angles[1] == angles[2])
			cout << "Isosceles";
		else
			cout << "Scalene";
	}
	else
		cout << "Error";
}