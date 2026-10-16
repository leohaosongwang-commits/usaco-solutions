#include <iostream>
using namespace std;

int main() {
    int n,a,b,average=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++) {
        for(int j=i;j<=n;j++) {
            int sum=0;
            for(int k=i;k<=j;k++) {
                sum+=p[k];
            }
            if (sum%j-i+1!=0) {
                continue;
            }
            int avg=sum/(j-i+1);
            for (int k=i;k<=j;k++) {
                if (p[k]==avg) {
                    average++;
                    break;
                }
            }
        }
    }
    cout << average;
}