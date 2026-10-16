#include <iostream>
using namespace std;

int main() {
    int n;
    int answer = 0;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++) {

        for(int j=i;j<n;j++) {

            int sum = 0;
            for(int k=i;k<n;k++) {
                sum += arr[k];
            }

            if (sum % (j-i+1) != 0) {
                continue;
            }

            int average = sum / (j-i+1);


            for (int i=0;i<n;i++) {
                if (arr[i] == average) {
                    answer++;
                }
            }
        }
    }

    cout << answer << endl;
    return 0;

}
