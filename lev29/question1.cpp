#include <iostream>
#include <vector>
using namespace std;

int map[100][100];
int n;
void run(int now)
{
	cout << now << " ";
	for (int x = 0; x < n; x++) {
		if (map[now][x] == 1) {
			run(x);
		}
	}

}
int main()
{
	cin >> n;
	int input;
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < n; x++) {
			cin >> input;
			map[y][x] = input;
		}
	}
	run(0);

	return 0;
}
