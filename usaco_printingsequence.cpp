#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, k, print = 1;
        cin >> n >> k;
        int arr[n];

        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }

        int cur = arr[0];

        for (int j = 1; j < n; j++) {
            if (arr[j] != cur) {
                print++;
                cur = arr[j];
            }
        }

        if (print <= k) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
