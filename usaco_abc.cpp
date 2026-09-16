#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    int arr[7];

    for(int i = 0; i < 7; i++) {
        cin>>arr[i];
    }

    sort(arr, arr + 7);

    a = arr[0];
    b = arr[1];
    c = arr[6]-a-b;

    cout<<a<<" "<<b<<" "<<c<<endl;
}