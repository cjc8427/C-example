// 3단계 조건문 6번
// 백준 11021번
// 백준 주소: https://www.acmicpc.net/problem/11021

#include<iostream>
using namespace std;

int main(){
    int A, B, T;

    cin >> T;

    for (int i = 1; i <= T; i++ ){
     cin >> A >> B;
     cout << "Case #" << i << ": " << A + B << endl;
    }

    return 0;
}