#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char arr1[11];
	char arr2[11];
	char arr3[11];

	cin >> arr1 >> arr2 >> arr3;

	int cnt = 0;

	if (strcmp(arr1, arr2) == 0) {
		cnt++;
		if (strcmp(arr2, arr3) == 0) cnt++;
	}
	else if (strcmp(arr1, arr3) == 0) cnt++;
	else if (strcmp(arr2, arr3) == 0) cnt++;

	if (cnt == 2) cout << "WOW";
	else if (cnt == 1) cout << "GOOD";
	else cout << "BAD";

	return 0;
}
