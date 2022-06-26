#include <iostream>
#include <vector>
using namespace std;


void run(int lev,int levdp,int branch,vector<int> path)
{
	if (lev == levdp) {
		for (int x = 0; x < path.size(); x++) {
			cout << path[x] << " ";
		}
		cout << "\n";
		return;
	}
	for (int x = 0; x < branch; x++) {
		path[lev] = x;
		run(lev + 1,levdp,branch,path);
		path[lev] = 0;
	}
}

int main()
{
	int levdp, branch;
	cin >> levdp >> branch;
	vector<int> path(levdp);

	run(0,levdp,branch,path);

	return 0;
}
