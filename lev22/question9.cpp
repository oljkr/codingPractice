#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char arr[5][10] = {
		"Jason",
		"Dr.tom",
		"EXEXI",
		"GK12P",
		"POW",
	};
	char input[10];
	
	int flag = 0;
	cin >> input;

	for (int y = 0; y < 5; y++) {
		if (strcmp(input, arr[y]) == 0) {
			flag = 1;
			break;
		}
	}

	if (flag) cout << "암호해제";
	else cout << "암호틀림";

	return 0;
}
