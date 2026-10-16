#include <iostream>
using namespace std;

int main() {
    int n,odd=0,even=0,cur=0;
    cin>>n;
    int arr[n];

    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }

    for (int i=0;i<n;i++) {
        cur=arr[i];
        if (cur%2==0) {
            even++;
        }
        else if (cur%2==1) {
            odd++;
        }
    }

   while (odd>even) {
       odd -=2;
       even++;
   }

   if (odd==even) {
       cout<<2*odd;
   }
   else {
       cout<<2*odd+1;
   }
}