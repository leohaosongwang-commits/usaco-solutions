#include <iostream>
using namespace std;

struct arr {
    int start;
    int  end;
    int bucket;
};

int main() {
    int n;
    cin>>n;

    arr cow[n];

    for (int i = 0; i < n; i++) {
        cin >> cow[i].start >> cow[i].end;
    }

    
}