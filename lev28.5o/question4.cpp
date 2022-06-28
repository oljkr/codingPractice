#include <iostream>
using namespace std;

int isValid(int arr[])
{
	for (int x = 0; x < 4; x++) {
		if (arr[x] > arr[x + 1]) return 0;
	}
	return 1;

}

int main()
{
	int arr[5];
	for (int x = 0; x < 5; x++) {
		cin >> arr[x];
	}

	if (isValid(arr) == 1) cout << "증가됨";
	else cout << "증가안됨";

	return 0;
}
