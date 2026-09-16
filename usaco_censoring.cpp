#include <iostream>
using namespace std;

int main() {
    string arr;
    string t;

    cin >> arr;
    cin >> t;

    int len = t.length();
    int l = arr.length();

    for (int i = 0; i < l; i++) {
        string cur;
        int count = 0;
        for (int j = 0; j < len; j++) {
            cur[i] = arr[j];
        }
        for (int j = 0; j < len; j++) {
            if (cur[j] == t[j]) {
                count++;
            }
        }
        if (count == len) {
            
        }
    }
}