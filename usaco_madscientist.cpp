 #include <iostream>
using namespace std;

int main() {
    int n,ans=0;
    cin>>n;

    string A;
    string B;
    bool flag[n];

    cin>>A;
    cin>>B;

    for (int i=0; i<n; i++) {
        char a=A[i];
        char b=B[i];

        if (a == b) {
            flag[i]=true;
        }
        else {
            flag[i]=false;
        }
    }

    for (int i = 0; i < n; i++) { 
        if (flag[i] == false) {
            if (i == 0 || flag[i-1] == true) {
                ans++;
            }
        }
    }

    cout<<ans;
}