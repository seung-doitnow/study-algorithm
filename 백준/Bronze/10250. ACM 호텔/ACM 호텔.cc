#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int H, W, N;
		cin >> H >> W >> N;

		int roomFloor = N % H;
		int roomDistance = N / H;

		if (roomFloor == 0)
			roomFloor = H;
		else
			roomDistance++;

		cout << roomFloor * 100 + roomDistance << '\n';
	}
}