#include <iostream>
using namespace std;

int main() {
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    int Max_Sum=s1+s2+s3;
    int arr[Max_Sum+1]={0};
    for (int i=1;i<=s1;i++) {
        for (int j=1;j<=s2;j++) {
            for (int k=1;k<=s3;k++) {
                int sum=j+k+i;
                arr[sum]++;
                cout<<sum<<" ";
            }
        }
    }

    int max_times=0;
    int min_sum=0;
    for (int i=3;i<=Max_Sum;i++) {
        if (arr[i] >max_times) {
            max_times=arr[i];
            min_sum=i;
        }
        if (arr[i]==max_times) {
            if (min_sum>i) {
                min_sum=i;
            }
        }
    }
    cout<<endl<<max_times<<endl;
    cout<<min_sum<<endl;
}
