#include <iostream>
using namespace std;

int main() {
    int n,count=0;
    cin >> n;
    char arr[n][n];

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cin >> arr[i][j];
        }
    }

    for (int i=n-1;i>=0;i--) {
        for (int j=n-1;j>=0;j--) {
            if (arr[i][j] == '1') {
                count++;
                for (int m=0;m<=i;m++) {
                    for (int k=0;k<=0;k++) {
                        if (arr[m][k]=='0') {
                            arr[m][k]=='1';
                        }
                        else{ 
                            arr[m][k]=='0';
                        }
                    }
                }
            }

        }
    }
    cout << count << endl;
}