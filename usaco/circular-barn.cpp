#include<iostream>
using namespace std;

int main() {
    int n;
    int cow = 0;
    int total_steep = 1000000;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++) {
        cin>>arr[i];
        cow+=arr[i];
    }

    for(int i=0;i<n;i++) {
        int start = arr[i];
        int cur_step = 0;

        for(int j=0;j<n;j++) {
            cur_step += arr[j] * ((j - i + n) % n); 
        }

        if(cur_step < total_steep) {
            total_steep = cur_step;
        }
    }

    cout<<total_steep<<endl;
}


