#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int count = 0;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);
    int pre;

    for(int i=0;i<n;i++) {
        int cur = arr[i];

        if (i==0) {
            pre = arr[i];
        }
        else {
            if (pre != cur) {
                count++;
                pre = cur;
            }
        }
    }
    cout << count << endl;
}