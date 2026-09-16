#include <iostream>
using namespace std;

int main() {
     int n,p1=0,p2=0,p3=0;
     cin>>n;
     int arr[4]={0,1,2,3};

     int a,b,g;
     for(int i=1;i<=n;i++) {
          cin>>a>>b>>g;

          int cur = arr[a];
          arr[a]=arr[b];
          arr[b]=cur;

          if (arr[g]==1) {
              p1++;
          }
         else if (arr[g]==2) {
             p2++;
         }
         else {
             p3++;
         }
     }

    int answer=max(p1,max(p2,p3));

    cout<<answer<<endl;
}