#include <iostream>
using namespace std;

int main() {
    int n,min_now,answer=100000000;
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>min_now;
        if (min_now < answer) {
            answer = min_now;
        }
    }
    cout<<answer<<endl;
}