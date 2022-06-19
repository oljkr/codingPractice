#include <iostream>
#include <string>
using namespace std;

int main()
{	
	int arr[10][10] = { 0 };

	int dy, dx, flg = 0;
	for (int x = 0; x < 6; x++) {
		cin >> dy >> dx;
		arr[dy][dx]++;
		if (arr[dy][dx] >= 2) {
			flg = 1;
			break;
		}
	}

	if (flg) cout << "중복된좌표발견";
	else cout << "중복없음";

	return 0;
}
