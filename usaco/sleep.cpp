#include <iostream>
using namespace std;

int n;
int arr[100000];

void process(int max_number,int sum) {

    for (int i=max_number;i<=sum;i++) {

        if (sum%i!=0) {
            continue;
        }

        int cur_sum=0;
        bool tag=true;

        for (int j=0;j<=n;j++) {
            cur_sum+=arr[j];

            if (cur_sum==sum) {
                cur_sum=0;
            }

            else if (cur_sum>sum) {
                tag=false;
                break;
            }
        }

        if (tag==true) {
            cout<<n-(sum/i)<<endl;
        }
    }
}

int main() {
    int T;
    cin>>T;

    for (int i=0;i<T;i++) {
        cin>>n;

        int sum=0,max_number=-1;

        for (int j=0;j<n;j++) {
            cin>>arr[j];

            if (arr[j]>max_number) {
                max_number=arr[j];
            }

            sum+=arr[j];
        }
    }


}