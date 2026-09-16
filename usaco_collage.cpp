#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n,t_max;
    long long profit_max=0,profit=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    for(int i=0;i<n;i++) {
        profit=arr[i]*(n-i);
        if(profit > profit_max) {
            profit_max=profit;
            t_max=arr[i];
        }
    }

    cout<<profit_max<<" "<<t_max<<endl;
}