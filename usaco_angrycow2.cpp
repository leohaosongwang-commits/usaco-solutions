#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    int radius = 0;
    int ans = 0;

    int cow[n];

    for (int i = 0; i < n; i++) {
        cin >> cow[i];
    }

    sort(cow, cow + n);

    int arr[1001] = {};

    for (int i = 0; i < n; i++) {
        int c = cow[i];
        arr[c] = 1;
    }
    
    for (int i = 0; i < n; i++) {
        int c = cow[i];
        count = 1;      
        radius = 1;
        int left = c;
        int right = c;

        if (c != 0 && c != 1000) {
            while ((left - 1 >= 0 && arr[left - 1] == 1) || (right + 1 <= 1000 && arr[right + 1] == 1)) {
                if (left - 1 >= 0 && arr[left - 1] == 1) {
                    left--;
                    count++;
                }
                if (right + 1 <= 1000 && arr[right + 1] == 1) {
                    right++;
                    count++;
                }
                radius++;
            }
        }
        else if (c == 1000) {
            while (left - 1 >= 0 && arr[left - 1] == 1) {
                left--;
                count++;
                radius++;
            }
        }
        else {
            while (right + 1 <= 1000 && arr[right + 1] == 1) {
                right++;
                count++;
                radius++;
            }
        }

        ans = max(ans, count);
    }
    
    cout << ans << endl;
}