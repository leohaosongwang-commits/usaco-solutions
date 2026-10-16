#include <iostream>
using namespace std;

int main() {
    int n,count=0;
    cin >> n;

    char arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = n; i>0; i--) {
        for (int j = n; j>0; j--) {
            if (arr[i][j] == '1') {
                count++;
                for (int k = 0; k < i; k++) {
                    for (int l = 0; l < j; l++) {
                        if (arr[k][l] == '0') {
                            arr[k][l] = '1';
                        }
                        else {
                            arr[k][l] = '0';
                        }
                    }
                }
            }
        }
    }

    cout<<count;
}