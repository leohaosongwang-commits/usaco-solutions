#include <algorithm>
#include <iostream>
using namespace std;

int main () {
    int n;
    cin>>n;

    int ans=0;

    int num[n];

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++) {

        int avrf = 0;
        for (int j = i; j < n; j++) {
            int sum = 0;
            int count = 0;

            for (int k = 0; k < n; k++) {
                num[k] = 0;
            }

            for (int k = i; k <= j; k++) {
                num[k] = arr[k];
                sum += arr[k];
            }
            for (int k = 0; k < n; k++) {
                if (num[k]!=0) {
                    count++;
                }
            }

            if (sum % count != 0) {
                continue;
            }
            avrf =(sum/count);

            for (int k = 0; k < n; k++) {
                if (num[k] == avrf) {
                    ans++;
                    break;
                }
            }
        }
    }
    cout << ans;
}