#include <iostream>
using namespace std;

struct Node
{
	char value;
	Node *left = NULL;
	Node *right = NULL;
};
int main()
{	
	Node *head = new Node();
	head->value = 'A';

	head->left = new Node();
	head->left->value = 'B';
	head->right = new Node();
	head->right->value = 'C';

	head->left->left = new Node();
	head->left->left->value = 'D';
	head->left->right = new Node();
	head->left->right->value = 'E';

	string str;
	cin >> str;

	Node *p = head;
	if (str.length() == 1) cout << p->value;
	if (str.length() == 2) {
		if (str[1] == 'R') cout << head->right->value;
		if (str[1] == 'L') cout << head->left->value;		
	}
	if (str.length() == 3) {
		if (str == "HLL") cout << head->left->left->value;
		if (str == "HLR") cout << head->left->right->value;
	}
	return 0;
}
