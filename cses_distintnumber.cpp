#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    int count=0;
    int cur;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    for(int i=0;i<n;i++) {
        if (i==0) {
            cur=arr[i];
        }
        if (cur!=arr[i]) {
            count++;
            cur=arr[i];
        }
    }

    cout<<count;
}

