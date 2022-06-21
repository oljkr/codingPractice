#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {
        0,5,4,
        3,0,0,
        0,0,1,
    };
    int n;
    cin >> n;
    int result[3][3] = { 0 };
    for (int z = 0; z < n; z++) {
        for (int y = 0; y < 3; y++) {
            for (int x = 0; x < 3; x++) {
                result[x][2 - y] = arr[y][x];
            }
        }
        for (int y = 0; y < 3; y++) {
            for (int x = 0; x < 3; x++) {
                arr[y][x] = result[y][x];
            }
        }
    }

    for (int y = 0; y < 3; y++) {
        for (int x = 0; x < 3; x++) {
            if (arr[y][x] == 0) {
                cout << "_";
            }
            else cout << arr[y][x];
        }
        cout << endl;
    }

    return 0;
}
