#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int arr[n];

    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    for (int i=0;i<n;i++) {
        int j = upper_bound(arr,arr+n,arr[i]+k)-arr;
        int cur=j=i;
        int ans = max(arr,cur);
    }

    cout<<ans<<endl;
}