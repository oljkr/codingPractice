#include <iostream>
using namespace std;

struct ABC {
	int data[4];
	int x;
};

int main()
{
	ABC a = { {1,2,3,4},10 };
	ABC b = { {7,8,9,10},15 };

	ABC *p, *g;
	p = &a;
	g = &b;

	for (int x = 0; x < 4; x++) {
		cout << p->data[x] << " ";
	}
	cout << endl;
	cout << p->x << endl;
	for (int x = 0; x < 4; x++) {
		cout << g->data[x] << " ";
	}
	cout << endl;
	cout << g->x;

	return 0;
}
