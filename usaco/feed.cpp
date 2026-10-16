#include<iostream>
using namespace std;

int s=1e5;
char grass[s];

void process() {
    int n,k,count=0;
    cin>>n>>k;

    for (int i=0;i<n;i++) {
        grass[i]='.';
    }

    string str;
    cin>>str;

    for (int i=0;i<n;i++) {
        if (str[i]=='g') {
            int pos=i+k;
            if (pos>=n) {
                pos=n-1;
            }
            grass[pos]='g';
            count++;

            i+=2*k;
        }
    }

    for (int i=0;i<n;i++) {
        if (str[i]=='h') {
            int pos=i+k;
            if (pos>=n) {
                pos=n-1;
            }

            if (grass[pos]=='g') {
                pos--;
            }
            grass[pos]='H';
            count++;
            i+=2*k;
        }
    }
    cout<<count<<endl;
    for (int i=0;i<n;i++) {
        cout<<grass[i];
        cout<<endl;
    }
}

int main() {
    int t;
    cin>>t;

    for (int i=0;i<n;i++) {
        process();
    }
}
