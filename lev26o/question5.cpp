#include <iostream>
using namespace std;

struct Node
{
	char x;
	Node *next;
};
Node *head;
Node *last;
void Enque(int value)
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
void Deque()
{
	Node *backup = head;
	head = head->next;
	delete backup;
}
int main()
{
	int a, b;
	cin >> a >> b;
	char c;
	for (int x = 0; x < a; x++) {
		cin >> c;
		Enque(c);
	}
	for (int x = 0; x < b; x ++) {
		Deque();
	}
	int d = 1;
	for (Node *p = head; p != NULL; p = p->next) {
		cout << p->x << " ";
	}
	return 0;
}
