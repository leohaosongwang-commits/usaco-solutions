#include <iostream>
#include <vector>
using namespace std;

int main() {
    string str;
    int a,b,c;
    int res[3];//value of a, b, c
    bool res_ass[3] = {false,false,false}; // if a, b, c is init before use
    cin>>str;

    vector<int> sep_idx;//seperator idx
    for (int i=0;i<225;i++) {
        if (str[i]==';') {
            sep_idx.push_back(i);
        }
    }

    int start=0, end=0;

    for (int i=0;i<sep_idx.size();i++) {
        // get every eval substring
        if (i!=0) {
            start=sep_idx[i-1]+1;
        }
        end=sep_idx[i]-1;

        if ((end-start+1) != 4) {
            cout<<"Invalid input"<<endl;
            return 1;
        }

        string eval=str.substr(start,4);

        if (eval.substr(1,2) != ":=") {
            cout<<"Invalid input"<<endl;
            return 1;
        }

        // handle eval substring
        // value of a,b,c is in res[3]

        // parse value of a single eval
        int value;
        char vari;
        if (eval[3]<='c'&&eval[3]>='a') {
            if (!(res_ass[eval[3]-'a'])) {
                cout<<"Invalid input"<<endl;
                return 1;
            }
            value=res[eval[3]-'a'];
        }
        else if (eval[3]<='9'&&eval[3]>='0') {
            value=eval[3]-'0';
        }
        else {
            cout<<"Invalid input"<<endl;
            return 1;
        }

        // assignment
        if (eval[0]<='c'&&eval[0]>='a') {
            res[eval[0]-'a']=value;
            res_ass[eval[0]-'a']=true;
        }
        else {
            cout<<"Invalid input"<<endl;
            return 1;
        }
    }
    for (int i=0;i<3;i++) {
        cout<<res[i]<<" ";
    }

    return 0;
}
