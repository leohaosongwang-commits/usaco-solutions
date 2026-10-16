#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int start = x;
    int dis = 1;
    int round = 0;
    int count = 0;

    while (true) {
        int next;

        if (round % 2 == 0) {
            next = start + dis;
        }
        else {
            next = start - dis;
        }

        if ((start <= y && y <= next) || (next <= y && y <= start)) {
            count += abs(y - start);
            break;
        }
        else {
            count += dis;
            start = next;
            dis *= 2;
            round++;
        }
    }

    cout << count << endl;
}