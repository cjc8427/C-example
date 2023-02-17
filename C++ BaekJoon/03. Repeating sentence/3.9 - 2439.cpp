// 3단계 조건문 9번
// 백준 2439번 - 별 찍기 - 2
// 백준 주소: https://www.acmicpc.net/problem/2439

// 2회차
#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++){
        for(int j = 0; j < N - i; j++){
            cout << " ";
        }
        for(int k = 0; k < i; k++){
        cout << "*";
        }
        cout << "\n";
    }
}

// #include<iostream>
// using namespace std;

// int main(){
//     int N;
//     cin >> N;

//     for(int i = 1; i <= N; i++){
//         for(int j = 0; j < (N-i); j++ ){
//             cout << " ";
//         } // 공백을 먼저 출력 -> 횟수 = 전체에서 별의 수만큼 뺀 수
//         for(int k = 0; k < i; k++){
//             cout << "*";
//         } // 공백 이후 별 출력
//         cout << "\n";
//     }
    
//     return 0;
// }