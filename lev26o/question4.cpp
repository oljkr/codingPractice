#include <iostream>
using namespace std;

struct Node
{
	char c;
	int n;
	Node *next;
};
Node *head;
Node *last;
void addNode(char v1, int v2)
{
	if (head == NULL) {
		head = new Node();
		head->c = v1;
		head->n = v2;
		last = head;
	}
	else {
		last->next = new Node();
		last = last->next;
		last->c = v1;
		last->n = v2;
	}
}
int main()
{
	int n;
	cin >> n;

	for (int x = 0; x < n; x++) {
		addNode(x + 'A', x + 1);
	}
	for (Node *p = head; p != NULL; p = p->next) {
		cout << p->c << " ";
	}
	cout << endl;
	Node *p = head;
	while (p != NULL) {
		cout << p->n << " ";
		p = p->next;
	}


	return 0;
}
