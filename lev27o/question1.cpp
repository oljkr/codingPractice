#include <iostream>
#include <vector>
using namespace std;

struct Node {
	int x;
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
int Deque() {
	if (head == NULL) {
		return 1;
	}
	head = head->next;
	return 0;
}
int main()
{
	int n;
	char a;
	cin >> n;
	int b, c = 0;
	for (int x = 0; x < n; x++) {
		cin >> a >> b;
		if (a == 'E') Enque(b);
		if (a == 'D') {
			c = Deque();
			if (c == 1) {
				cout << "Error";
				break;
			}
		}
	}

	int cnt = 0;
	if (c != 1) {
		for (Node *p = head; p != NULL; p = p->next) {
			if (p->next != NULL) cnt++;
		}
		if (cnt >= 4) cout << "Error";
		else for (Node *p = head; p != NULL; p = p->next) {
			cout << p->x << " ";
		}
	}

	return 0;
}
