// 3단계 반복문 7번
// 백준 11022번
// 백준 주소: https://www.acmicpc.net/problem/11022

#include<iostream>
using namespace std;

int main(){
    int A, B, T;

    cin >> T;

    for (int i = 1; i <= T; i++ ){
     cin >> A >> B;
     cout << "Case #" << i << ": " << A << " + " << B << " = "<< A + B << endl;
    }

    return 0;
}