#include<iostream>
using namespace std;

int main() {
    int n,k,answer=0;
    cin>>n>>k;

    int arr[n];

    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    for(int i=0;i<k;i++) {
        swap(arr[i],arr[i+1]);
    }

    answer=arr[1];

    cout<<answer;
}