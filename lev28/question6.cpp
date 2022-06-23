#include <iostream>
#include <string>
using namespace std;

string name;
int map[8][8];

void run(int now)
{
	cout << name[now];

	for (int x = 0; x < 8; x++) {
		if (map[now][x] == 1) {
			run(x);
		}
	}
}
int main()
{
	cin >> name;
	for (int y = 0; y < 8; y++) {
		for (int x = 0; x < 8; x++) {
			cin >> map[y][x];
		}
	}

	run(0);

	return 0;
}
