#include <iostream>
using namespace std;

int main() {
    int n,m,min_sum=100000,cur_sum=0;
    cin >> n >>m;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for (int i = 0; i < n-m+1; i++) {
        cur_sum=0;
        for (int j = i; j < i+m ; j++) {
            cur_sum+=arr[j];
        }
        if (cur_sum<min_sum) {
            min_sum=cur_sum;
        }
    }
    cout<<min_sum<<endl;
}
