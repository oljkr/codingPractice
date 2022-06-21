#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> A = { {2,6,3},{7,1,1},{3,4,2} };
vector<vector<int>> B = { {6,4,2,4},{1,1,5,8} };
vector<vector<int>> C = { {9,2,3},{4,2,1} };

vector<vector<int>> result(3);

void max() {
	vector<vector<int>> check(A.size());
	int max = -99, maxyIndex = -1, maxxIndex = -1;
	for (int y = 0; y < A.size(); y++) {
		for (int x = 0; x < A[y].size(); x++) {
			if (A[y][x] > max) {
				max = A[y][x];
				maxyIndex = y;
				maxxIndex = x;
			}
		}
	}
	result[0].push_back(max);
	for (int y = 0; y < A.size(); y++) {
		for (int x = 0; x < A[y].size(); x++) {
			if (y == maxyIndex && x == maxxIndex) {
				check[y].push_back(1);
			}
			else check[y].push_back(0);
		}
	}
	max = -99, maxyIndex = -1, maxxIndex = -1;
	for (int y = 0; y < A.size(); y++) {
		for (int x = 0; x < A[y].size(); x++) {
			if (check[y][x] == 1) continue;
			if (A[y][x] > max) {
				max = A[y][x];
				maxyIndex = y;
				maxxIndex = x;
			}
		}
	}
	result[0].push_back(max);
	check[maxyIndex][maxxIndex] = 1;
	max = -99, maxyIndex = -1, maxxIndex = -1;
	for (int y = 0; y < A.size(); y++) {
		for (int x = 0; x < A[y].size(); x++) {
			if (check[y][x] == 1) continue;
			if (A[y][x] > max) {
				max = A[y][x];
				maxyIndex = y;
				maxxIndex = x;
			}
		}
	}
	result[0].push_back(max);
}

void min() {
	vector<vector<int>> check(B.size());
	int min = 99, minyIndex = -1, minxIndex = -1;
	for (int y = 0; y < B.size(); y++) {
		for (int x = 0; x < B[y].size(); x++) {
			if (B[y][x] < min) {
				min = B[y][x];
				minyIndex = y;
				minxIndex = x;
			}
		}
	}
	result[1].push_back(min);
	for (int y = 0; y < B.size(); y++) {
		for (int x = 0; x < B[y].size(); x++) {
			if (y == minyIndex && x == minxIndex) {
				check[y].push_back(1);
			}
			else check[y].push_back(0);
		}
	}
	min = 99, minyIndex = -1, minxIndex = -1;
	for (int y = 0; y < B.size(); y++) {
		for (int x = 0; x < B[y].size(); x++) {
			if (check[y][x] == 1) continue;
			if (B[y][x] < min) {
				min = B[y][x];
				minyIndex = y;
				minxIndex = x;
			}
		}
	}
	result[1].push_back(min);
	check[minyIndex][minxIndex] = 1;
	min = 99, minyIndex = -1, minxIndex = -1;
	for (int y = 0; y < B.size(); y++) {
		for (int x = 0; x < B[y].size(); x++) {
			if (check[y][x] == 1) continue;
			if (B[y][x] < min) {
				min = A[y][x];
				minyIndex = y;
				minxIndex = x;
			}
		}
	}
	result[1].push_back(min);

}

void minmax() {
	vector<vector<int>> check(C.size());
	int max = -99, min = 99, minyIndex = -1, minxIndex = -1;
	for (int y = 0; y < C.size(); y++) {
		for (int x = 0; x < C[y].size(); x++) {
			if (C[y][x] < min) {
				min = C[y][x];
				minyIndex = y;
				minxIndex = x;
			}
		}
	}
	result[2].push_back(min);
	for (int y = 0; y < C.size(); y++) {
		for (int x = 0; x < C[y].size(); x++) {
			if (y == minyIndex && x == minxIndex) {
				check[y].push_back(1);
			}
			else check[y].push_back(0);
		}
	}
	min = 99, minyIndex = -1, minxIndex = -1;
	for (int y = 0; y < C.size(); y++) {
		for (int x = 0; x < C[y].size(); x++) {
			if (check[y][x] == 1) continue;
			if (C[y][x] < min) {
				min = C[y][x];
				minyIndex = y;
				minxIndex = x;
			}
		}
	}
	result[2].push_back(min);
	check[minyIndex][minxIndex] = 1;
	int maxyIndex = -1, maxxIndex = -1;
	for (int y = 0; y < C.size(); y++) {
		for (int x = 0; x < C[y].size(); x++) {
			if (check[y][x] == 1) continue;
			if (C[y][x] > max) {
				max = C[y][x];
				maxyIndex = y;
				maxxIndex = x;
			}
		}
	}
	result[2].push_back(max);

}
int main()
{
	max();
	min();
	minmax();
	
	for (int y = 0; y < result.size(); y++) {
		for (int x = 0; x < result[y].size(); x++) {
			cout << result[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}
