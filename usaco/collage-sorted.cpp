#include <algorithm>
#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int total = 0;
    int cow = 0;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
        int cur = arr[i];
        int cur_cow=0;
        int cur_total= 0;
        for (int j = i ; j < n; j++) {
            if (cur <= arr[j]) {
                cur_cow++;
                cur_total += cur;
            }
        }
        if (cur_total > total) {
            total = cur_total;
            cow=cur;
        }
    }

    cout << total << " "<< cow <<endl;
}