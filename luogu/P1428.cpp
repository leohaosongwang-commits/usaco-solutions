
#include <iostream>
using namespace std;

int main() {
    int n,answer=0,count=0;
    cin >> n;
    int fish[n];
    for(int i=0;i<n;i++) {
        cin>>fish[i];
        count=(i-1);
        answer=0;
        for(int j=count;j<=0;j--) {
            if (fish[j]<fish[j-1]) {
                answer++;
            }
        }
        cout<<answer;
    }
}