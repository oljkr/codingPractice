#include <iostream>
#include <string>
using namespace std;

int main()
{
	string lm, p1, f1;
	string p[2] = { "PASS","pass" };
	string f[2] = { "FAIL","fail" };
	int cntp = 0, cntf = 0, x, hap, perc;
	cin >> lm;
	for (int a = 0; a < 2; a++) {
		for (int b = 0; b < 2; b++) {
			for (int c = 0; c < 2; c++) {
				for (int d = 0; d < 2; d++) {
					p1 = "";
					p1 += p[a][0];
					p1 += p[b][1]; 
					p1 += p[c][2];
					p1 += p[d][3];
					x = -1;
					while (1) {
						if (lm.find(p1, x + 1) == -1) break;
						x = lm.find(p1, x + 1);
						cntp++;
					}
				}
			}
		}
	}

	for (int a = 0; a < 2; a++) {
		for (int b = 0; b < 2; b++) {
			for (int c = 0; c < 2; c++) {
				for (int d = 0; d < 2; d++) {
					f1 = "";
					f1 += f[a][0];
					f1 += f[b][1];
					f1 += f[c][2];
					f1 += f[d][3];
					x = -1;
					while (1) {
						if (lm.find(f1, x + 1) == -1) break;
						x = lm.find(f1, x + 1);
						cntf++;
					}
				}
			}
		}
	}

	hap = cntp + cntf;
	perc = (cntp * 100) / hap;
	cout << perc << "%";

	return 0;
}
