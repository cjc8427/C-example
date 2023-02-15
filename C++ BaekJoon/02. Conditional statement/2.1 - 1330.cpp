// 2단계 조건문 1번
// 백준 1330번 - 두 수 비교하기
// 백준 주소: https://www.acmicpc.net/problem/1330

// 2회차
#include<iostream>
using namespace std;

int main(){
    int A, B;

    cin >> A >> B;

    if(A > B){
        cout << ">" << endl;
    }
    if(A < B){
        cout << "<" << endl;
    }
    if(A == B){
        cout << "==" << endl;
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int A, B;
//     cin >> A >> B;

//     if(A > B){
//         cout << ">" << endl;   
//     }else if(A < B){
//         cout << "<" << endl;
//     }else if(A == B){
//         cout << "==" << endl;
//     }

//     return 0;
// }