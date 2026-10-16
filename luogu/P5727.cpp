#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[10000];
    int i=1;
    arr[0]=n;
    while(n != 1){
        if(n%2 == 0){
            n = n/2;
        }
        else{
            n = n*3+1;
        } 
        arr[i] = n;
        i++;
    }
    for(int j=0;j<i;j++){
        cout<<arr[i-1-j]<<" ";
    }
}