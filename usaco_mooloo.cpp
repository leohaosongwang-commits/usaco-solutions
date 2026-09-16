#include <iostream>
using namespace std;

int main () {
    int n;
    long long k,m=0;
    cin>>n>>k;

    long long arr[n];

    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    m = k+1;

    for (int i = 1; i < n; i++) {
        m += min(arr[i]-arr[i-1],k+1);
    }

    cout<<m<<endl;
}
