#include <iostream>
using namespace std;

int main(){
    int n,point_min,point_max,point_total,average,number,sum;
    cin>>n;
    sum=0;
    point_min=1001;
    point_max=-15;
    for (int i=0;i<n;i++){
        cin>>number;
        cout << "#=" << number << endl;
        sum=sum+number;
        cout << "sum=" << sum << endl;
        if(number<point_min){
            point_min=number;
            cout << "point_min=" << point_min << endl;

        }
        if(number>point_max){
            point_max=number; 
            cout << "point_max=" << point_max << endl;
        }
    }

    cout<<((sum-point_max+0.0)-(point_min+0.0))/(n-2)<<endl;
}