// 3단계 반복문 3번
// 백준 8393번
// 백준 주소: https://www.acmicpc.net/problem/8393

#include<iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;
    
    cin >> n;

    for (int i = 1; i <= n; i++ ){
     sum = sum+i;
    }

    cout << sum << endl;

    return 0;
}