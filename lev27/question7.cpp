#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> arr;
vector<int> checkm(6, 0);
vector<int> checkx(6, 0);

void min(vector<int> &arr,vector<int> &checkm) {
    int min = 99;
    int minIndex = -1;
    for (int x = 0; x < 6; x++) {
        if (checkm[x] == 1) continue;
        if (arr[x] < min) {
            min = arr[x];
            minIndex = x;
        }
    }
    cout << min;
    checkm[minIndex] = 1;
}

void max(vector<int> &arr, vector<int> &checkx) {
    int max = -99;
    int maxIndex = -1;
    for (int x = 0; x < 6; x++) {
        if (checkx[x] == 1) continue;
        if (arr[x] > max) {
            max = arr[x];
            maxIndex = x;
        }
    }
    cout << max;
    checkx[maxIndex] = 1;
}
int main()
{
    int n;
    for (int x = 0; x < 6; x++) {
        cin >> n;
        arr.push_back(n);
    }
    string cmd;
    cin >> cmd;
    for (int x = 0; x < cmd.length(); x++) {
        if (cmd[x] == 'm') {
            min(arr,checkm);
        }
        if (cmd[x] == 'x') {
            max(arr,checkx);
        }
    }

    return 0;
}
