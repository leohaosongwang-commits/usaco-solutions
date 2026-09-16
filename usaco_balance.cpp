#include <iostream>
using namespace std;

int main() {
    int n,B,M,answer=100000;
    cin>>n>>B;
    int x[n];
    int y[n];

    for (int i = 0; i < n; i++) {
        cin>>x[i]>>y[i];
    }

    for (int i = 0; i < n; i++) {
         int v = x[i]+1;

        for (int j = 0; j < n; j++) {
             int h = y[j]+1;

            int A=0,B=0,C=0,D=0;

            for (int k = 0; k < n; k++) {
                if (x[k]>v && y[k]>h) {
                    A++;
                }
                else if (x[k]<v && y[k]>h) {
                    B++;
                }
                else if (x[k]>v && y[k]<h) {
                    C++;
                }
                else {
                    D++;
                }
            }
            M = max(A, max(B, max(C,D)));
            answer = min(answer, M);
        }
    }
    cout<<answer<<endl;
}