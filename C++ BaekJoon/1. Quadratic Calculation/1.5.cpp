// 1단계 입출력과 사칙연산 5번
// 백준 1008번
// 백준 주소: https://www.acmicpc.net/problem/1008

#include<iostream>
using namespace std;

int main(){
    long double A, B;
    cin >> A >> B;

    cout << fixed;
	cout.precision(9);
    // 소수점 고정 개념 도입

    cout << A / B << endl;
    return 0;
}