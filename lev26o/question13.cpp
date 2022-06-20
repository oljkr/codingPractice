#include <iostream>
using namespace std;

int main()
{
	int A[3][3] = { 2,6,3,7,1,1,3,4,2, };
	int B[2][4] = { 6,4,2,4,1,1,5,8, };
	int C[2][3] = { 9,2,3,4,2,1 };

	int dat1[3][3] = { 0 };
	int dat2[2][4] = { 0 };
	int dat3[2][3] = { 0 };

	int D[3][3];

	int max[3] = { -1,-1,-1 };
	int min[3] = { 99,99,99, };
	int minmax[3] = { 99,99,-1 };
	
	int flg = 0;
	
	for (int z = 0; z < 3; z++) {
		flg = 0;
		for (int y = 0; y < 3; y++) {
			for (int x = 0; x < 3; x++) {
				if (dat1[y][x] == 1) continue;
				if (max[z] < A[y][x]) {
					max[z] = A[y][x];
				}
			}
		}
		for (int y = 0; y < 3; y++) {
			for (int x = 0; x < 3; x++) {
				if (A[y][x] == max[z]&&dat1[y][x]==0) {
					dat1[y][x] = 1;
					flg = 1;
					break;
				}
			}
			if (flg) break;
		}
	}
	int a = 1;

	for (int z = 0; z < 3; z++) {
		flg = 0;
		for (int y = 0; y < 2; y++) {
			for (int x = 0; x < 4; x++) {
				if (dat2[y][x] == 1) continue;
				if (min[z] > B[y][x]) {
					min[z] = B[y][x];
				}
			}
		}
		for (int y = 0; y < 2; y++) {
			for (int x = 0; x < 4; x++) {
				if (B[y][x] == min[z]&&dat2[y][x]==0) {
					dat2[y][x] = 1;
					flg = 1;
					break;
				}
			}
			if (flg) break;
		}
	}

	int d = 1;
	for (int z = 0; z < 2; z++) {
		flg = 0;
		for (int y = 0; y < 2; y++) {
			for (int x = 0; x < 3; x++) {
				if (dat3[y][x] == 1) continue;
				if (minmax[z] > C[y][x]) {
					minmax[z] = C[y][x];
				}
			}
		}
		for (int y = 0; y < 2; y++) {
			for (int x = 0; x < 3; x++) {
				if (minmax[z] == C[y][x]&&dat3[y][x] == 0) {
					dat3[y][x] = 1;
					flg = 1;
					break;
				}
			}
			if (flg) break;
		}
	}

	for (int y = 0; y < 2; y++) {
		int flg = 0;
		for (int x = 0; x < 3; x++) {
			if(dat3[y][x]==1) continue;
			if (minmax[2] < C[y][x]) {
				minmax[2] = C[y][x];
			}
		}
		for (int y = 0; y < 2; y++) {
			for (int x = 0; x < 3; x++) {
				if (minmax[2] == C[y][x] && dat3[y][x] == 0) {
					dat3[y][x] = 1;
					flg = 1;
					break;
				}
			}
			if (flg) break;
		}
	}

	for (int x = 0; x < 3; x++) {
		D[0][x] = max[x];
	}
	for (int x = 0; x < 3; x++) {
		D[1][x] = min[x];
	}
	for (int x = 0; x < 3; x++) {
		D[2][x] = minmax[x];
	}
	
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			cout << D[y][x] << " ";
		}
		cout << endl;
	}
		
	return 0;
}
