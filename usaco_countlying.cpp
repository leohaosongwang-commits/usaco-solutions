#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    char dir[10000];
    int p[10000];

    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> p[i];
    }

    int min_liars = n;

    for (int i = 0; i < n; i++) {
        int liars = 0;

        for (int j = 0; j < n; j++) {
            if (dir[j] == 'L' && p[i] > p[j]) {
                liars++;
            }
            if (dir[j] == 'G' && p[i] < p[j]) {
                liars++;
            }
        }

        min_liars = min(min_liars, liars);

    }

    cout << min_liars << endl;

}