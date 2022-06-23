#include <iostream>
#include <iostream>
using namespace std;

string name[5] = {
	"Amy","Bob","Chloe",
	"Edger","Diane"
};

int map[5][5] = {
	0,0,0,1,0,
	1,0,0,0,0,
	0,1,0,0,0,
	0,0,0,0,0,
	0,1,0,0,0,
};

int main()
{
	int cnt = 0, max = -99, maxIndex = -1;
	for (int x = 0; x < 5; x++) {
		cnt = 0;
		for (int y = 0; y < 5; y++) {
			if (map[y][x] == 1) cnt++;
		}
		if (cnt > max) {
			max = cnt;
			maxIndex = x;
		}
	}

	cout << name[maxIndex];

	return 0;
}
