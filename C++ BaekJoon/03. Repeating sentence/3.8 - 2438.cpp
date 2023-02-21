// 3단계 반복문 8번
// 백준 2438번 - 별 찍기 - 1
// 백준 주소: https://www.acmicpc.net/problem/2438

// 2회차
#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++){
        for(int j = 0; j < i; j++){
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
//         for(int j = 0; j < i; j++ ){
//             cout << "*";
//         }
//         cout << "\n";
//     }
    
//     return 0;
// }