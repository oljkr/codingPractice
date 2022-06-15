#include <iostream>
#include <string>
using namespace std;

int main()
{
	int arr[7] = { 3,5,5,6,9,1,2 };
	int temp[7];
	int a, b;
	cin >> a >> b;
	
	for (int x = a; x <= b; x++) {
		temp[x] = arr[a + b - x];
	}
	for (int x = a; x <= b; x++) {
		arr[x] = temp[x];
	}
	for (int x = 0; x < 7; x++) {
		cout << arr[x] << " ";
	}

	return 0;
}
