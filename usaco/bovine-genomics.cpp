#include <iostream>
using namespace std;

int main () {
    int n;
    int m;
    int count = 0;

    cin >> n >> m;

    string spoty[n];
    string plain[n];

    for (int i = 0; i < n; i++) {
        cin >> spoty[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> plain[i];
    }

    for (int i = 0; i < m; i++) {
        int pos = i;

        char s[n][1];
        char p[n][1];

        int sl = 0;
        int pl = 0;


        for (int j = 0; j < n; j++) {
            char c = spoty[j][pos];
            bool found = false;
            for (int k = 0; k < sl; k++) {
                if (s[k][0] == c) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                s[sl][0] = c;
                sl++;
            }
        }


        for (int j = 0; j < n; j++) {
            char c = plain[j][pos];
            bool found = false;
            for (int k = 0; k < pl; k++) {
                if (p[k][0] == c) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                p[pl][0] = c;
                pl++;
            }
        }


        bool overlap = false;
        for (int a = 0; a < sl; a++) {
            for (int b = 0; b < pl; b++) {
                if (s[a][0] == p[b][0]) {
                    overlap = true;
                    break;
                }
            }
            if (overlap) {
                break;
            }
        }

        if (!overlap) {
            count++;
        }
    }

    cout << count << endl;

}