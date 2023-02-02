// 3단계 조건문 11번
// 백준 10951번
// 백준 주소: https://www.acmicpc.net/problem/10951

#include<iostream>
using namespace std;

int main(){

    int A, B;
    
    while (cin >> A >> B)
    // 조건식에 cin을 넣어서, A와 B를 읽기 실패했을 경우
    // 스트림 상태를 변경해 bool값을 반환받음
    // true -> false가 되면서 while문을 종료
    {
        cout << A + B << "\n";
    }
    
    return 0;
}