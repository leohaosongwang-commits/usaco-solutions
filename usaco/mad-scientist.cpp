#include <iostream>
using namespace std;

int main() {
    int n,answer=0;
    cin>>n;
    string a,b;
    cin>>a>>b;

    for(int i=0;i<n;i++) {
        if (a[i]!=b[i]) {
            if (a[i-1]==b[i-1]||i==0) {
                answer++;
            }
        }
    }

    cout<<answer<<endl;
}