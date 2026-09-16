#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n,t=-1;
    cin>>n;
    pair<int,int> arr[n];

    for (int i=0;i<n;i++) {
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr,arr+n);
    for (int i=0;i<n;i++) {
        if (arr[i].first >= t) {
            t=arr[i].first+arr[i].second;
        }
        else {
            t=t+arr[i].second;
        }
    }
    cout<<t<<endl;
}