#include <iostream>
using namespace std;

int main() {
    int k,n,min;
    int count_pre=0;
    int count=0;

    cin>>n>>k;

    int arr[n];

    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }

    for (int i=0;i<n;i++) {
        count_pre=0;
        min=arr[i];
        for (int j=1;j<n;j++) {
            if (abs(min-arr[j])<=k) {
                count_pre++;
            }
        }
        if (count_pre>count) {
            count=count_pre;
        }
    }
    cout<<count<<endl;
}