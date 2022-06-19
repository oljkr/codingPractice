#include <iostream>
#include <string>
using namespace std;

char ox[3] = "ox";
char path[3];
void numpt(char path[]) {
	int a = 0;
	for (int x = 0; x < 3; x++) {
		if (path[x] == 'o') a++;
	}
	if (a == 3) cout << "3승";
	if (a == 2) cout << a << "승" << 3 - a << "패";
	if (a == 1) cout << a << "승" << 3 - a << "패";
	if (a == 0) cout << "3패";
}
void charpt(char path[])
{
	cout << "(";
	for (int x = 0; x < 3; x++) {
		if (path[x] == 'o') cout << "승";
		if (path[x] == 'x') cout << "패";
	}
	cout << ")\n";

}
void run(int lev) {
	if (lev == 3) {
		numpt(path);
		charpt(path);
		return;
	}
	for (int x = 0; x < 2; x++) {
		path[lev] = ox[x];
		run(lev + 1);
		path[lev] = 0;
	}
}
int main()
{	
	run(0);

	return 0;
}
