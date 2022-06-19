#include <iostream>
#include <string>
using namespace std;

int main()
{	
	int arr[7] = { 3,5,5,6,9,1,2, };
	int a, b;
	cin >> a >> b;
	int temp[7] = { 0 };
	int rn = 0;
	for (int x = b; x >= a; x--) {
		temp[rn++] = arr[x];
	}
	rn = 0;
	for (int x = a; x <= b; x++) {
		arr[x] = temp[rn++];
	}

	for (int x = 0; x < 7; x++) {
		cout << arr[x] << " ";
	}
	return 0;
}
