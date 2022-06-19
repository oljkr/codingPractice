#include <iostream>
#include <string>
using namespace std;

struct Node {
	int x;
	Node *next;
};
int main()
{	
	Node a, b, c;
	a.x = 3;
	a.next = &b;

	a.next->x = 5;
	a.next->next = &c;

	a.next->next->x = 4;
	a.next->next->next = NULL;



	return 0;
}
