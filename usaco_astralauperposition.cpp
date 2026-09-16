#include <iostream>
using namespace std;

int main () {
    int t,count=0;
    int n,a,b;
    cin >> t;
    cin >> n >> a >> b;

    char arr[n][n];
    int star[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 'W') {
                star[i][j] = 1;
            }
            else if (arr[i][j] == 'B') {
                star[i][j] = 2;
            }
            else{
                if (star[i-b][j-a] >= 0) {
                    star[i][j] = star[i-b][j-a];
                }
                else {
                    star[i][j] = 1;
                }
            }

        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (star[i][j] == 2) {
                    count++;
                }
            }
        }

        cout << count << endl;

        return 0;
    }
}