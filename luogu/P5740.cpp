#include <iostream>
using namespace std;

int main() {
    struct GRADE{
        string name;
        int grade_c,grade_m,grade_e,grade_sum;
    };
    int n;
    cin>>n;

    GRADE grades[n];
    for(int i=0;i<n;i++) {
        GRADE grade;
        cin>>grade.name>>grade.grade_c>>grade.grade_m>>grade.grade_e;
        grade.grade_sum=grade.grade_m+grade.grade_e+grade.grade_c;
        grades[i]=grade;
    }
    int max_sum=0;
    int max_idx=-1;
    for(int i=0;i<n;i++) {
        if (grades[i].grade_sum>max_sum) {
            max_sum=grades[i].grade_sum;
            max_idx=i;
        }
    }
    cout<<grades[max_idx].name<<grades[max_idx].grade_sum<<endl;
}