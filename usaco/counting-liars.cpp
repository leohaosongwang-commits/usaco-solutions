#include <iostream>
using namespace std;

struct pro {
    char bs;
    int pos;
};

int main() {
    int n;
    cin >> n;

    pro arr[n];

    int ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i].bs >> arr[i].pos;
    }

    for (int i = 0; i < n; i++) {
        int bessie = arr[i].pos;
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[n].bs == 'G' && bessie < arr[j].pos) {
                count++;
            }
            if (arr[n].bs == 'L'&& bessie > arr[j].pos) {
                count++;
            }
        }
        ans = min(count, ans);
    }
}
