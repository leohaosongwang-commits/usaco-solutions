#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, m;
        cin >> n >> m;

        long long a[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        long long ans = 0;
        long long col[n];

        for (int j = 0; j < m; j++) {
            for (int i = 0; i < n; i++) {
                col[i] = a[i][j];
            }
        }

        sort(col, col+n);

        long long prefix = 0;
        for (int i = 0; i < n; i++) {
            ans += col[i] * i - prefix;
            prefix += col[i];
        }

        cout << ans << "\n";
    }
}
