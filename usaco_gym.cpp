#include <iostream>
using namespace std;

int main() {
    int n,m,answer=0;
    cin>>n>>m;
    char spot[n][m];
    char plain[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>spot[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>plain[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        bool a=false,c=false,g=false,t=false;

        for (int j = 0; j < n; j++) {
            if (spot[j][i] == 'A') {
                a=true;
            }
            else if (spot[j][i] == 'C') {
                c=true;
            }
            else if (spot[j][i] == 'G') {
                g=true;
            }
            else {
                t=true;
            }
        }

        bool tag = true;

        for (int j = 0; j < n; j++) {
            if (plain[j][i] == 'A') {
                if (a == true) {
                    break;
                }
            }
            else if (plain[j][i] == 'C') {
                if (c == true) {
                    tag=false;
                    break;
                }
            }
            else if (plain[j][i] == 'G') {
                if (g == true) {
                    tag=false;
                    break;
                }
            }
            else {
                if (t == true) {
                    tag=false;
                    break;
                }
            }
        }

        if (tag == true){
            answer++;
        }
    }
    cout << answer;
}