#include <iostream>
#include <string>
using namespace std;

struct Node
{
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
	string text; 
	cin >> text;
	int n; 
	cin >> n;

	for (int x = 0; x < text.length(); x++) {
		addNode(text[x]);
	}
	Node *p = head;
	for (int x = 0; x < n; x++) {
		p = p->next;
	}

	int d = 1;

	string cmd;
	int cmdn = 0;
	Node *q;
	cin >> cmd;
	for (int x = 0; x < 4; x++) {
		q = head;
		if (cmd[x] == 'R') {
			p = p->next;
		}
		if (cmd[x] == 'L') {
			for (int i = 0; i < text.length(); i++) {
				if (q->next->x == p->x) {
					p = q;
					break;
				}
				q = q->next;
			}
		}
		if (cmd[x] == 'D') {
			for (int i = 0; i < text.length(); i++) {
				if (q->next->x == p->x) {
					q->next = p->next;
					p = q->next;
					break;
				}
				q = q->next;
			}
		}
	}


	int ptnum = 0;
	for (Node *s = head; s != NULL; s = s->next) {
		if (s->x == p->x) {
			cout << ptnum;
			break;
		}
		ptnum++;
	}
	return 0;
}
