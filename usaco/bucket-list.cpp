#include <iostream>
using namespace std;

int main () {
    int n,s_cur,t_cur,b_cur,answer=0;
    cin>>n;

    int bucket[n];

    for (int i=0;i<n;i++) {
        cin>>s_cur>>t_cur>>b_cur;
        int sub=t_cur-s_cur+1;

        for (int j=0;j<sub;j++) {
            bucket[s_cur+j]+=b_cur;
        }
    }

    for (int i = 0; i <= n; i++) {
        answer = max(answer, bucket[i]);
    }
    cout<<answer-1<<endl;
}