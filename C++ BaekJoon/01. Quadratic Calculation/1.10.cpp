// 1단계 입출력과 사칙연산 10번
// 백준 10430번
// 백준 주소: https://www.acmicpc.net/problem/10430

#include<iostream>
using namespace std;

int main(){

    int A, B, C;

    cin >> A >> B >> C;

    cout << (A+B)%C << endl;
    cout << ((A%C) + (B%C))%C << endl;
    cout << (A*B)%C << endl;
    cout << ((A%C) * (B%C))%C << endl;


    return 0;
}