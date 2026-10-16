#include <iostream>
using namespace std;

int main() {
    int B_contain;
    int E_contain;
    int M_contain;

    int B_now;
    int E_now;
    int M_now;

    int r[3];

    cin >> B_contain >> B_now;
    cin >> E_contain >> E_now;
    cin >> M_contain >> M_now;

    for (int i = 0; i < 100; i++) {
        int cur_b = B_now;
        int cur_e = E_now;
        int cur_m = M_now;
        //1
        if (E_contain >= B_now) {
            cur_e += B_now;
        }
    }

    cout << B_now << endl << E_now << endl << M_now << endl;
}