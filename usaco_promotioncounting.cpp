#include <iostream>
using namespace std;

int main () {
    int b1,b2,s1,s2,g1,g2,p1,p2;
    int s,g,p;

    cin >> b1 >> b2;
    cin >> s1 >> s2;
    cin >> g1 >> g2;
    cin >> p1 >> p2;

    p = p2 - p1;
    g = (g2+p2)-(p1+g1);
    s = (s2+g2+p2)-(s1+g1+p1);

    cout << s << endl << g << endl << p <<endl;
}