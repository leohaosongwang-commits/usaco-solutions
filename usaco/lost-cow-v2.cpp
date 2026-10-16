#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x,y;
    cin >> x >> y;

    int start = x;
    int dis_x=1;
    int end=x+1;
    int dis=0;

    while (true) {
        if (((start<=y)&&(end>=y))||(end<=y)&&(y<=start)) {
            dis += abs(start-y);
            break;
        }
        else {
            dis += abs(start-end);
            dis_x *= -2;
            start=end;
            end = x+dis_x;
        }
    }
    cout << dis << endl;
}