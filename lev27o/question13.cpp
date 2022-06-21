#include <iostream>
#include <string>
using namespace std;

char name[] = "ABCDE";

int map[5][5] = {
	0,1,7,2,0,
	1,0,8,0,5,
	7,8,0,3,6,
	2,0,3,0,0,
	0,5,6,0,0,
};

int main()
{
	for (int y = 0; y < 4; y++) {
		for (int x=y+1; x < 5; x++) {
			if (map[y][x] == 0) continue;
			cout << name[y] << " " << name[x] << " " << map[y][x] << "\n";
		}
	}
	return 0;
}
