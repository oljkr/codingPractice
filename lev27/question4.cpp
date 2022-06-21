#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Node {
	char x;
	Node *next;
};
Node *head;
Node *last;

void addNode(char value)
{
	if (head == NULL) {
		head = new Node();
		head->x = value;
		last = head;
	}
	else {
		last->next = new Node();
		last = last->next;
		last->x = value;
	}
}
int main()
{
	int n;
	cin >> n;
	for (int x = 0; x < 4; x++) {
		addNode(n - 11 + 'A' + x);
	}

	for (Node *p = head; p != NULL; p = p->next) {
		cout << p->x;
	}

	return 0;
}
