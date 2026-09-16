#include <iostream>
using namespace std;

int main(){
    int k;
    cin>>k;
    int sum=0;
    int money_everyday=1;
    int day_current=money_everyday;
    for(int i=0;i<k;i++){
        sum=sum + money_everyday;
        day_current=day_current-1;
        //开始新阶段
        if(day_current==0){
            money_everyday=money_everyday+1;
            day_current=money_everyday;
        }
    }
    cout<<sum<<endl;
}