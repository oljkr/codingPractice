#include <iostream>
#include <string>
#include <vector>
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
	int n;
	cin >> n;
	for (int x = 1; x <= 4; x++) {
		addNode(n * x);
	}
	Node *p = head;
	while (p != NULL)
	{
		cout << p->x << " ";
		p = p->next;
	}

	return 0;
}
