// 3단계 조건문 2번
// 백준 10950번
// 백준 주소: https://www.acmicpc.net/problem/10950

#include<iostream>
using namespace std;

int main(){
    int A, B, T;

    cin >> T;

    for (int i = 0; i < T; i++ ){
     cin >> A >> B;
     cout << A + B << endl;
    }

    return 0;
}