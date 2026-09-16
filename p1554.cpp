#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[10] ={0};// 0..9,count
    for(int i=n;i<m;i++){
        //seperate number
        int q=i;
        while(q!=0){
            arr[q%10]++;
            q=q/10;
        }
    }
    for(int a=0;a<10;a++){
        cout<<arr[a]<<" ";
    }
}

