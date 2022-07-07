#include <iostream>
#include <vector>
using namespace std;

int vect1[4];
int vect2[4];
int result[8];

int main()
{
	for (int x = 0; x < 4; x++) {
		cin >> vect1[x];
	}	

	for (int x = 0; x < 4; x++) {
		cin >> vect2[x];
	}

	int last1 = 0, last2 = 0;

	for (int x = 0; x < 8; x++) {
		if (last1 == 4) {
			result[x] = vect2[last2];
			last2++;
		}
		else if (last2 == 4) {
			result[x] = vect1[last1];
			last1++;
		}
		else if (vect1[last1] < vect2[last2]) {
			result[x] = vect1[last1];
			last1++;
		}
		else {
			result[x] = vect2[last2];
			last2++;
		}
	}

	for (int x = 0; x < 8; x++) {
		cout << result[x] << " ";
	}

	return 0;
}
