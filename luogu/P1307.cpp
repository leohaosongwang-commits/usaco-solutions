#include <iostream>
using namespace std;

int main() {
    int n_old, n_new= 0;
    cin >> n_old;
    while (n_old != 0) {
        n_new = n_new * 10 + n_old % 10;
        n_old= n_old/10;
    } 
    cout << n_new; 
}