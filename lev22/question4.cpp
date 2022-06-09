#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char arr[5];
	int cnt = 0;

	for (int x = 0; x < 5; x++) {
		cin >> arr;
		if (strcmp(arr, "up") == 0) cnt++;
		else cnt--;
	}

	if (cnt >= 0) cout << cnt + 1;
	else cout << "B" << cnt * (-1);

	return 0;
}
