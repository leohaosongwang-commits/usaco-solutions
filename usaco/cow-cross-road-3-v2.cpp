#include <algorithm>
#include <iostream>
using namespace std;

struct cow {
    int a;
    int t;
};

bool cmp(cow a, cow b) {
    return a.a < b.a;
}

int main () {
    int n;
    cin >> n;

    cow arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i].a >> arr[i].t;
    }

    sort(arr, arr + n, cmp);

    int busyUntil = 0;
    for (int i = 0; i < n; i++) {
        int start = max(arr[i].a,busyUntil);
        busyUntil = start + arr[i].t;
    }

    cout << busyUntil << endl;
    return 0;
}