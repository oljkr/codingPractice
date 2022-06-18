#include <iostream>
using namespace std;

struct BBQ {
	int a;
	int b;
};
int main()
{
	BBQ *bbq = new BBQ;
	cin >> bbq->a;
	cin >> bbq->b;
	cout << bbq->a + 5 <<" "<< bbq->b + 5 << endl;


	return 0;
}
