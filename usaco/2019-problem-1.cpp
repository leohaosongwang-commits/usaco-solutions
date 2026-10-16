#include <iostream>
using namespace std;

int main() {
    // int k,n;
    // cin>>n>>k;
    // for (int i=0;i<k;i++) {
    //
    // }

    int k = 3, m = 4, count =0;
    int arr[3][4] = {{4,1,2,3},
                    {4,1,3,2},
                    {4,2,1,3}};

    for (int i = 0; i < m; i++) {
        for (int j=i+1;j < m;j++) {
            int first=arr[0][i], second=arr[0][j];//make a pair
            int found_pair=0;

            for (int a=1; a<k; a++) {
                int found_first = 0, found_second = 0;//flag for whether found
                found_pair = 0;
                for (int b=0; b<m; b++) {
                    if (arr[a][b] == second) {
                        found_second = 1;
                    }

                    if ((found_first == 0) && (found_second == 1)) {
                        break;// ignor following elements in the line
                    }

                    if (arr[a][b] == first) {
                        found_first = 1;
                    }

                    if ((found_first == 1) && (found_second == 1)) {
                        found_pair = 1;
                        break;// ignor following elements in the line
                    }
                }
                if (found_pair == 0) {
                    // if not found, ignor following lines
                    break;
                }
            }

            if (found_pair != 0) {
                cout <<"a="<<first<<"b="<<second<<endl;
                count++;
            }
        }

    }
    cout << "count=" << count << endl;

}