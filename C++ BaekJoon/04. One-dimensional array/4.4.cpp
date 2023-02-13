// 4단계 1차원 배열 4번
// 백준 2562번
// 백준 주소: https://www.acmicpc.net/problem/2562

#include<iostream>
using namespace std;

int main(){
    int n, max = 0, N = 0;
    int arr[9];

    for(int i = 0; i < 9; i++){
        cin >> n;
        arr[i] = n;
    }

    for(int i = 0; i < 9; i++){
        if(arr[i] > max){
            max = arr[i];
            N = i;
            // if문이 돌때마다, 그때의 i 값이 N에 저장된다.
        }
    }
    
    cout << max << "\n" << N + 1 << endl;
    // 인덱스 값이 0부터 시작이므로, N에 1을 더해준다.

    return 0;
}