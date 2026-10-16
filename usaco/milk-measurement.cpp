#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

struct process {
    int day;
    string name;
    int change;
};

bool cmp(process a, process b) {
    return a.day < b.day;
}

int main() {
    int n;
    int bessie = 7;
    int elsie = 7;
    int mildred = 7;
    int wall_change = 0;

    bool bessie_b = true;
    bool elsie_b = true;
    bool mildred_b = true;

    cin >> n;
    process arr[105];

    for (int i = 0; i < n; i++) {
        cin >> arr[i].day >> arr[i].name >> arr[i].change;
    }

    sort(arr, arr + n, cmp);

    for (int i = 0; i < n; i++) {


        if (arr[i].name == "Bessie") {
            bessie += arr[i].change;
        }
        else if (arr[i].name == "Elsie") {
            elsie += arr[i].change;
        }
        else {
            mildred += arr[i].change;
        }

        bool new_b = false;
        bool new_e = false;
        bool new_m = false;


        if (bessie > elsie && bessie > mildred) {
            new_b = true;
        }

        else if (elsie > bessie && elsie > mildred) {
            new_e = true;
        }

        else if (mildred > bessie && mildred > elsie) {
            new_m = true;
        }

        else if (bessie == elsie && bessie > mildred) {
            new_b = true;
            new_e = true;
        }

        else if (bessie == mildred && bessie > elsie) {
            new_b = true;
            new_m = true;
        }

        else if (elsie == mildred && elsie > bessie) {
            new_e = true;
            new_m = true;
        }

        else if (bessie == elsie && elsie == mildred) {
            new_b = true;
            new_e = true;
            new_m = true;
        }

        if (new_b != bessie_b || new_e != elsie_b || new_m != mildred_b) {
            wall_change++;
        }

        bessie_b = new_b;
        elsie_b = new_e;
        mildred_b = new_m;
    }

    cout << wall_change << endl;
}