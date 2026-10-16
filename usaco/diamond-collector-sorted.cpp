#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;

    int arr[n];
    int ans=n;
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if ((arr[j]-arr[i])>k) {
                ans--;
            }
        }
    }

    cout<<ans<<endl;
}