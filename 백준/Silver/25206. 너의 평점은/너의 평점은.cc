#include <iostream>

using namespace std;

int main()
{
	double sumCredit = 0;
	double sumScore = 0;
	for (int i = 0; i < 20; i++)
	{
		char subject[51];
		double credit;
		char grade[3];
		cin >> subject >> credit >> grade;

		double score = 0;
		switch (grade[0])
		{
		case 'A':
			score = 4;
			break;

		case 'B':
			score = 3;
			break;

		case 'C':
			score = 2;
			break;

		case 'D':
			score = 1;
			break;

		case 'F':
			sumCredit += credit;
			continue;
			break;

		case 'P':
			continue;
			break;
		}

		if (grade[1] == '+')
			score += 0.5;

		sumCredit += credit;
		sumScore += credit * score;
	}

	cout.precision(4);
	cout << fixed << sumScore / sumCredit;
}