#include <iostream>
using namespace std;

int main()
{
	int *simData[5];
	int a, b, c, d, e;
	simData[0] = &a;
	simData[1] = &b;
	simData[2] = &c;
	simData[3] = &d;
	simData[4] = &e;

	cin >> a >> b >> c >> d >> e;
	int max = -99, min = 99;
	for (int x = 0; x < 5; x++) {
		if (*simData[x] > max) {
			max = *simData[x];
		}
		if (*simData[x] < min) {
			min = *simData[x];
		}
	}

	cout << "MAX:" << max << endl;
	cout << "MIN:" << min << endl;

	return 0;
}
