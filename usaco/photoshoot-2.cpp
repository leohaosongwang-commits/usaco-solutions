#include <iostream>
using namespace std;



int main() {
    int n,count=0;
    cin>>n;

    int a[n];
    int b[n];
    int c[n];

    for(int i=1;i<=n;i++) {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++) {
        cin>>b[i];
        c[b[i]]=i;

    }

    for(int i=1;i<=n;i++) {
        a[i]=c[a[i]];
    }

    int cur_max=0;

    for(int i=1;i<=n;i++) {
        if (a[i]>cur_max) {
            count++;
            cur_max=a[i];
        }
    }

    cout << n-count << endl;
}