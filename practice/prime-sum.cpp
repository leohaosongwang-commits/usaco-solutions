#include <iostream>
using namespace std;

int main(){
    int sum=0;
    
    for(int i=2;i<=1000;i++){
        bool isPrime = true;
        for(int j=2; j<=i-1; j++){
            if(i%j == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            cout<<i<<endl;
            sum = sum+i;
        }
    }
    cout<<sum<<endl;
}



