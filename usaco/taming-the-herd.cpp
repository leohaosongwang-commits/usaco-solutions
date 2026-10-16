#include <iostream>
using namespace std;

int main() {
    int n;
    int max, min;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    if ((arr[1]!=0)||(arr[1]!=-1)) {
        cout << -1 << endl;
    }
    if (arr[1]==-1) {
        arr[1]=0;
    }

    for(int i=1;i<n;i++) {
        int count = 0;

    }

    cout << min << max;
}