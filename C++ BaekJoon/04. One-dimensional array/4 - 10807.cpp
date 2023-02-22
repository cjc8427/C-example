// 4단계 1차원 배열
// 백준 10807번 - 개수 세기
// 백준 주소: https://www.acmicpc.net/problem/10807

// 2회차
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size, N, v, same = 0;
    cin >> size;
    int arr[size];

    for(int i = 0; i < size; i++){
        cin >> N;
        arr[i] = N;
    }

    cin >> v;

    for(int i = 0; i < size; i++){
        if(arr[i] == v){
            same++;
        }
    }

    cout << same << endl;
    return 0;
}

// #include<iostream>
// using namespace std;

// int main(){
//     int size, N, v, n = 0;
//     cin >> size;
//     int arr[size];
    
//     for(int i = 0; i < size; i++){
//         cin >> N;
//         arr[i] = N;
//     }
//     cin >> v;
//     for (int j = 0; j < size; j++){
//         if(v == arr[j]){
//             n++;
//         }
//     }

//     cout << n << endl;

//     return 0;
// }