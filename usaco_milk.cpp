#include <iostream>
using namespace std;

int main() {
    int x,y,m,result=0;
    cin>>x>>y>>m;
    for(int i=0;i*x<=m;i++) {
        for(int j=0;j*y+i*x<=m;j++) {
            result=max(j*y+i*x,result);
        }
    }
    cout<<result<<endl;
}