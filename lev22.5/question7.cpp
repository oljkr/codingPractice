#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char arr[4][5][4] = {
		{" # ",
		"# #",
		"###",
		"# #",
		"# #"},
		{"###",
		"# #",
		"###",
		"# #",
		"###"},
		{"###",
		"# #",
		"   ",
		"# #",
		"###"},
		{"## ",
		"# #",
		"# #",
		"# #",
		"## ",},
	};

	int a;
	cin >> a;

	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 3; x++) {
			cout << arr[a][y][x];
			}
			cout << endl;
		}

	return 0;
}
