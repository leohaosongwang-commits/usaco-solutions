#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count=n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = n; i > 0; i--) {
        if (arr[i]<arr[i-1]) {
            count--;
        }
    }
    cout<<count<<endl;
}