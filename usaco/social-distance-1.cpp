#include <iostream>
using namespace std;

int main() {
    int n;
    int max_dis=0;
    int dis=0;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            dis++;
            max_dis = max(max_dis, dis);
        }
        else {
            dis = 0;
        }
    }

    int d=0;

    if (max_dis%2 == 1) {
        d = max_dis/2;
    }
    else {
        if (max_dis/2 > 2) {
            d = max_dis/2-1;
        }
        else {
            d = max_dis/2;
        }
    }

    cout << d << endl;

}