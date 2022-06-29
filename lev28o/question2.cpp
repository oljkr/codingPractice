#include <iostream>
using namespace std;

int map[10][10];
int n;

void input()
{
	cin >> n;
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < n; x++) {
			cin >> map[y][x];
		}
	}
}

void run(int now)
{
	cout << now << " ";

	for (int i = 0; i < n; i++) {
		if (map[now][i] == 1) {
			run(i);
		}
	}
}

int main()
{
	input();
	run(0);

	return 0;
}
