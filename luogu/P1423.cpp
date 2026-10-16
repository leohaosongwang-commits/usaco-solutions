#include<iostream>
using namespace std;

int main(){
    float speed=2;
    int step=0;
    float distance=0;
    cin>>distance;
    while(distance>0){
        speed=speed*0.98;
        distance=distance-speed;
        step++;
    }
    cout<<step<<endl;
}