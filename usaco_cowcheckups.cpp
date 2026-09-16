#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int a[n];
    int b[n];
    int ans[n+1];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        int start = i;
        int ex = i;
        for (int j = 0; j < n-start; j++) {
            int end = j;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }
}