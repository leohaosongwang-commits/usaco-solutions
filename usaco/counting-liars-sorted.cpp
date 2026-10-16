#include <algorithm>
#include <iostream>
using namespace std;
int n,answer=0,answer_cur=0,cow,idxl=0,idxg=0;
int g[1000000];
int l[1000000];

int process(int x) {
    int total=0;
    int j = upper_bound(g,g+idxg,x)-g;
    total+=(idxg-j);
    j=lower_bound(l,l+idxl,x)-l-1;
    total+=(j+1);
    return total;
}

int main() {
    cin>>n;
    string s;

    for(int i=0;i<n;i++) {
        cin>>s;
        if (s == "G") {
            cin>>g[i];
            idxg++;
        }
        else {
            cin>>l[i];
            idxl++;
        }
    }

    sort(g,g+idxg);
    sort(l,l+idxl);

    for(int i=0;i<idxg;i++) {
        answer_cur = process(g[i]);
        answer = min(answer,answer_cur);
    }
    for(int i=0;i<idxl;i++) {
        answer_cur = process(l[i]);
        answer = min(answer,answer_cur);
    }

    cout<<answer<<endl;
}