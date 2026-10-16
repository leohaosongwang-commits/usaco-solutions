#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n,count=0;
    cin >> n;

    int arr[n];
    int arr_true[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arr_true[i] = arr[i];
    }

    sort (arr_true, arr_true+n);

    for (int i=0; i<n; i++) {
        if (arr[i]!=arr_true[i]) {
            count++;
        }
    }

    cout << count-1 << endl;
    return 0;
}