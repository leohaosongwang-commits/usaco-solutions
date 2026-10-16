#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;

struct cow {
    int a;
    int t;
};

bool cmp(cow a, cow b) {
    return a.a< b.a;
}

int main () {
    int n;
    int ans = 0;
    int place;
    int step = 100000;
    cin >> n;
    int t = 0;

    cow arr[n];

    bool line[1000000] = {false};

    for (int i = 0; i < n; i++) {
        cin >> arr[i].a;
        cin >> arr[i].t;
    }

    sort (arr, arr + n, cmp);

    for (int i = 0; i < n; i++) {
        int cur = 0;
        int start = arr[i].a + t;
        t=0;
        line[start] = true;
        for (int j = start; j < n; j++) {
            if (line[j]==true) {
                t++;
            }
            else {
                line[j] = true;
            }
        }
        for (int j = 0; j < 1000000; j++) {
            if (line[j]==true) {
                cur++;
            }
        }
        step = max(step, cur);
        memset(line, false, sizeof(line));
        place = start + step;
        ans = max(place, ans );
    }


    cout << ans << endl;
    return 0;
}


