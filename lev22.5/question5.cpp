#include <iostream>
using namespace std;

int main()
{
	int map[3][6] = {
		3,5,4,2,2,3,
		1,3,3,3,4,2,
		5,4,4,2,3,5,
	};
	char price[6] = "TPGKC";
	char a, b;
	cin >> a >> b;
	int aa = a - 'A';
	int bb = b - '1';

	int num = map[aa][bb];
	cout << price[num-1];

	return 0;
}
