#include<iostream>
using namespace std;

int main() {
    int n, record[101], sum[20001] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> record[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int s = record[i] + record[j];
            sum[s] = 1;
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (sum[record[i]] == 1) {
            count++;
        }
    }
    cout << count << endl;
}