#include <iostream>
using namespace std;

struct guard {
    int start;
    int end;
};

int main () {
    int n;
    cin >> n;
    int ans = 0;

    guard g[n];
    int arr[1000];

    for (int i = 0; i < n; i++) {
        cin >> g[i].start >> g[i].end;
    }

    for (int i = 0; i < n; i++) {

        int count = 0;

        for (int j = 0; j < 1000; j++) {
            arr[j] = 0;
        }

        for (int j = 0; j < n; j++) {
            if (j == i) {
                continue;
            }

            int cur_s = g[j].start;
            int cur_e = g[j].end;

            for (int k = cur_s; k < cur_e; k++) {
                arr[k] = 1;
            }
        }

        for (int j = 0; j < 1000; j++) {
            if (arr[j] >= 1) {
                count++;
            }
        }

        ans = max(ans, count);
    }

    cout << ans << endl;
}