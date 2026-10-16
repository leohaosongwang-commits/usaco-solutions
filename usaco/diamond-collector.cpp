#include <iostream>
using namespace std;

int main() {
    int n,k,min,answer=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    for (int i=0;i<n;i++) {
        min=arr[i];
        int count=0;
        for (int j=0;j<n;j++) {
            if ((min+k>=arr[j])&&(arr[j]>=min)) {
                count++;
            }
        }
        answer=max(answer,count);
    }
    cout<<answer<<endl;
}