#include <iostream>
using namespace std;

int main() {
    int con[3];
    int vol[3];
    int cur_vol[3];

    for(int i=0;i<3;i++) {
        cin>>con[i]>>vol[i];
    }

    for(int i=0;i<100;i++) {
        cur_vol[i]=vol[i];
        //1round
        if (con[0]>=cur_vol[1]) {
            cur_vol[1]+=cur_vol[0];
            cur_vol[0]=0;
        }
        else {
            cur_vol[1]=con[1];
            cur_vol[0]=0;
        }
        //2round
        if (con[1]>=cur_vol[2]) {
            cur_vol[2]+=cur_vol[1];
            cur_vol[1]=0;
        }
        else {
            cur_vol[2]=con[2];
            cur_vol[1]=0;
        }
        //3round
        if (cur_vol[2]>=vol[0]) {
            vol[0]+=cur_vol[2];
            cur_vol[2]=0;
        }
        else {
            vol[2]=con[2];
        }

        vol[1]=cur_vol[1];
        vol[2]=cur_vol[2];

    }

    for(int i=0;i<3;i++) {
        cout<<vol[i]<<endl;
    }
}