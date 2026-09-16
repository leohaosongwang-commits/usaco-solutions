#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string word;
    int len = 0;

    for (int i = 0; i < n; i++) {
        cin >> word;

        if (len + word.length() <= k) {
            if (len > 0) {
                cout << ' ';
            }

            cout << word;
            len += word.length();
            
        }
        else {
            cout << endl<< word;
            len = word.length();
        }
    }

    cout << endl;
}