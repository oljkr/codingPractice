#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str[3][3] = {
		"BHC","BBQ","KFC",
		"MC","7AVE","PAPA",
		"DHC","OBS","MOMS",
	};
	string pt;
	int y, x;
	int dy, dx;
	int dir[4][2] = { -1,0,0,-1,1,0,0,1 };

	cin >> y >> x;

	for (int i = 0; i < 4; i++) {
		dy = y + dir[i][0];
		dx = x + dir[i][1];
		if (dy < 0 || dy>2 || dx < 0 || dx>2) continue;
		pt += str[dy][dx];
	}
	cout << pt;
	return 0;
}
