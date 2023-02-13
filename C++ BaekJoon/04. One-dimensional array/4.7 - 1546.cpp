// 4단계 1차원 배열 7번
// 백준 1546번
// 백준 주소: https://www.acmicpc.net/problem/1546

#include<iostream>
using namespace std;

int main(){
    int size, n, M = 0;
    double all = 0;

    cin >> size;
    double arr[size];

    for (int i = 0; i < size; i++){
        cin >> n;
        arr[i] = n;
    }

    for(int i = 0; i < size; i++){
        if ( arr[i] > M){
            M = arr[i];
        }
    }

    for (int i = 0; i < size; i++){
        arr[i] = (arr[i]/M)*100;
    }

    for (int i = 0; i < size; i++){
        all = all + arr[i];
    }
    cout << all/size << endl;

    return 0;
}