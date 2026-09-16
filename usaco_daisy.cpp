#include <iostream>
using namespace std;

int main() {
    int n,answer=0;
    cin >> n;
    int arr[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }
            if (sum % (j-i+1) != 0) {
                continue;
            }

            int average = sum / (j - i + 1);

            for (int k = i; k <= j; k++) {
                if (arr[k]== average) {
                    answer++;
                    break;
                }
            }
        }
    }
    cout << answer << endl;
}