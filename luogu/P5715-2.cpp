#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}


int main()
{
    int a,b,c = 0;

    cout << "input a b c" <<endl;
    cin >> a >> b >> c;
    cout << endl;

    if(a>b)
    {
        swap(a,b);
    }
    if(a>c)
    {
        swap(a,c);
    }
    if(b>c)
    {
        swap(b,c);
    }

}

