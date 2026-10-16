#include <iostream>
using namespace std;

int main () {
    char arr[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    char a = arr[0][0];
    char b = arr[0][1];
    char c = arr[0][2];
    char d = arr[1][0];
    char e = arr[1][1];
    char f = arr[1][2];
    char g = arr[2][0];
    char h = arr[2][1];
    char i = arr[2][2];

    //单人获胜
    int single = 0;
    if ((arr[0][0]==arr[0][1])&&(arr[0][1]==arr[0][2])) {
        single++;
    }
    if ((arr[1][0]==arr[1][1])&&(arr[1][1]==arr[1][2])) {
        single++;
    }
    if (((arr[2][0]==arr[2][1])&&(arr[2][1]==arr[2][2]))) {
        single++;
    }
    if ((arr[0][0]==arr[1][1])&&(arr[1][1]==arr[2][2])) {
        single++;
    }
    if ((arr[0][2]==arr[1][1])&&(arr[1][1]==arr[2][0])) {
        single++;
    }
    if ((arr[0][0]==arr[1][0])&&(arr[1][0]==arr[2][0])) {
        single++;
    }
    if ((arr[0][1]==arr[1][1])&&(arr[1][1]==arr[2][1])) {
        single++;
    }
    if ((arr[0][2]==arr[1][2])&&(arr[1][2]==arr[2][2])) {
        single++;
    }

    //双人获胜
    int team = 0;
    int cur[8];
    //1 第1行 a b c
    if (a != b && b != c && a != c) {
        cur[0]=3;
    }
    else if (a == b && b == c) {
        cur[0]=1;
    }
    else {
        cur[0]=2;
        team++;
    }
    //2 第2行 d e f
    if (d != e && e != f && d != f) {
        cur[1]=3;
    }
    else if (d == e && e == f) {
        cur[1]=1;
    }
    else {
        cur[1]=2;
        team++;
    }
    //3 第3行 g h i
    if (g != h && h != i && g != i) {
        cur[2]=3;
    }
    else if (g == h && h == i) {
        cur[2]=1;
    }
    else {
        cur[2]=2;
        team++;
    }
    //4 第1列 a d g
    if (a != d && d != g && a != g) {
        cur[3]=3;
    }
    else if (a == d && d == g) {
        cur[3]=1;
    }
    else {
        cur[3]=2;
        team++;
    }
    //5 第2列 b e h
    if (b != e && e != h && b != h) {
        cur[4]=3;
    }
    else if (b == e && e == h) {
        cur[4]=1;
    }
    else {
        cur[4]=2;
        team++;
    }
    //6 第3列 c f i
    if (c != f && f != i && c != i) {
        cur[5]=3;
    }
    else if (c == f && f == i) {
        cur[5]=1;
    }
    else {
        cur[5]=2;
        team++;
    }
    //7 主对角线 a e i
    if (a != e && e != i && a != i) {
        cur[6]=3;
    }
    else if (a == e && e == i) {
        cur[6]=1;
    }
    else {
        cur[6]=2;
        team++;
    }
    //8 副对角线 c e g
    if (c != e && e != g && c != g) {
        cur[7]=3;
    }
    else if (c == e && e == g) {
        cur[7]=1;
    }
    else {
        cur[7]=2;
        team++;
    }

    cout << single <<" "<< team << endl;
}