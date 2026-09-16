#include <iostream>
using namespace std;

struct cor {
    int x;
    int y;
};

int main () {
    int n;
    int ans = 0;
    cin >> n;

    int in[n][2];

    bool arr[10000][10000];

    cor cord [n];

    for (int i = 0; i < n; i++) {
        cin >> in[i][0] >>in[i][1];
    }

    for (int i = 0; i < n; i++) {
        int curx = in[i][0];
        int cury = in[i][1];

        arr[curx][cury] = true;

        cord[n].x = curx;
        cord[n].y = cury;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i][ ]  == 1) {

        }
        for (int j = 0; j < n; j++) {

        }

    }

    cout << ans*2 << endl;
}