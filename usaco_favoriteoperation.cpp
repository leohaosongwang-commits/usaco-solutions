#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    for (int i=0; i<t; i++) {
        int n;
        cin>>n;

        for (int j=0; j<n-1; j++) {
            int count_r=0;
            int cur=i;
            int round_right=i;
            int round_wrong=i;
            int cur_11=0;
            int cur_12=0;
            int cur_100=0;

            if (cur%10 > 0) {
                int cur_11=cur%10;
                if (cur_11>=5) {
                    round_right=cur_11;
                }
                else if (){

                }
            }

            if (cur%100 > 0) {
                int cur_100=cur%100;
                if (cur_100>=5) {
                    cur_12=
                }
            }

            if (round_right!=round_wrong) {
                count_r++;
                cout<<count_r<<endl;
            }
        }
    }
}