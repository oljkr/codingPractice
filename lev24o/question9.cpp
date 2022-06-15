#include <iostream>
#include <string>
using namespace std;

char ox[3] = "OX";
char path[4];

void printchar(char path[])
{
	for (int x = 0; x < 3; x++) {
		if (path[x] == 'O') cout << "승";
		else cout << "패";
	}
}
void printnum(char path[])
{
	int o = 0, x = 0;
	for (int i = 0; i < 3; i++) {
		if (path[i] == 'O') o++;
		else x++;
	}
	if (x == 0) cout << "3승";
	else if (o == 0) cout << "3패";
	else cout << o << "승" << x << "패";
}
void run(int lev)
{
	if (lev == 3) {
		printnum(path);
		cout << "(";
		printchar(path);
		cout << ")\n";
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
