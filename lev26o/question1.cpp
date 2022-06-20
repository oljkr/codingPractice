#include <iostream>
using namespace std;

struct Node {
	int x;
	Node *next;
};
Node *head;
Node *last;
void addNode(int value)
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
	int input;
	cin >> input;
	for (int i = 1; i <= 4; i++) {
		addNode(i * input);
	}

	Node *p = head;
	while (1)
	{
		if (p == NULL) break;
		cout << p->x << " ";

		p = p->next;
	}

	return 0;
}
