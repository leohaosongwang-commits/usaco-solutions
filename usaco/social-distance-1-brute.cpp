#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int d1=0;
    int d2=0;
    int d_aver=0;
    int dis=0;
    int max_dis=0;

    string s;
    cin>>s;

    for (int i = 0; i < n; i++) {
        if (s[i] == 0) {
            dis++;
            max_dis = max(max_dis, dis);
        }
        else {
            dis = 0;
        }
    }

    d_aver = max_dis;

    for (int i = 0; i < n; i++) {
        if (s[i]!='0') {
            d1=i;
            for (int j = 0; j < n; j++) {
                d2=j;
            }
        }
    }


}