// 백준 10871번
// 백준 주소: acmicpc.net/problem/10871

#include <iostream>

using namespace std;

int main(){
    int N, X;
    cin >> N >> X;
    int arr[N];
    

    for (int i = 0; i<N; i++){
        int j;
        cin >> j;
        arr[i] = j;
    }

    for (int i=0; i<N; i++){
        if(arr[i]<X){
            cout << arr[i] << " ";
        }

    }

    return 0;
}