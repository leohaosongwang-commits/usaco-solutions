#include <iostream>
using namespace std;

const int MAXN = 100005;
int a[MAXN];
int b[MAXN];
int c[MAXN];

int main() {
    int n;
    cin >> n;


    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        c[b[i]] = i;
    }

    for (int i = 1; i <= n; i++) {
        a[i] = c[a[i]];
    }

    int move_count = 0;
    int max_pos = 0;

    for (int i = 1; i <= n; i++) {
        if (a[i] < max_pos) {
            move_count++;
        }
        else {
            max_pos = a[i];
        }
    }

    cout << move_count;
}