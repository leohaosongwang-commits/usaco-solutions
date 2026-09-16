#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    string password_old;
    cin>>password_old;

    for (int i=0;i<password_old.length();i++) {
        char c=password_old[i];

        if (c+n<'z') {
            c+=n;
        }
        else {
            c='a'+(n-('z'-c));
        }
        password_old[i]=c;
    }
    cout<<password_old<<endl;
}
